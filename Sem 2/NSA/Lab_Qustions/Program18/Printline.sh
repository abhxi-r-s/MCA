#!/bin/bash

read -p "Enter the file name :" file
echo "Enter the $file content :"
cat > $file
read -p "Enter the line to start " line
tail -$line $file