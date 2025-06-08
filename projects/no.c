#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char capitalizeName(char c);
void getInput(char prompt[], char buffer[], size_t size);

int main() {

  char name[50] = "";
  char url[200] = "";
  char iconPath[200] = "";
  char command[1024] = "";

  getInput("Name: ", name, sizeof(name));
  getInput("Url :", url, sizeof(url));
  getInput("Icon :", iconPath, sizeof(iconPath));

  char first = capitalizeName(name[0]);

  snprintf(command, sizeof(command),
           "set -e\n"
           "echo Creating desktop entry...\n"
           "tmpdir=$(mktemp -d)\n"
           "tmp_desktop_file=\"$tmpdir/hehe-%s.desktop\"\n"
           "cat >$tmp_desktop_file <<EOF\n"
           "[Desktop Entry]\n"
           "Type=Application\n"
           "Name=%c%s\n"
           "Exec=/usr/bin/thorium-browser --app='%s'\n"
           "Icon=%s\n"
           "Terminal=false\n"
           "StartupNotify=true\n"
           "StartupWMClass=hehe-%s\n"
           "EOF\n"
           "xdg-desktop-menu install $tmp_desktop_file;"
           "echo Desktop entry created.\n",
           name, first, name + 1, url, iconPath, name);

  // Execute the command
  system(command);
  printf("done");
  // printf("%s", command);
  return 0;
}

char capitalizeName(char c) {
  if (c >= 'a' && c <= 'z') {
    c -= 32;
  }
  return c;
}

void getInput(char prompt[], char buffer[], size_t size) {
  do {
    printf("%s", prompt);
    if (fgets(buffer, size, stdin)) {
      buffer[strcspn(buffer, "\n")] = '\0';
    }
  } while (strlen(buffer) == 0);
}
