#!/bin/bash

matches=$(find . -name '*-com')

if [ -z "$matches" ]; then
  echo "nothing"
  exit 1
fi


echo "$matches" | while IFS= read -r line; do
    rm -r "$line" && echo "deleted: $line"
done

echo "done!! heheheh"
