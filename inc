#!/bin/sh
set -e
echo 1 >> hello
git commit -a -m foo
git push
