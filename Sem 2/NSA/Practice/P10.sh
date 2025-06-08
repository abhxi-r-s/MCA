#!/bin/bash

read -p "Enter the file name :" file
echo "Enter the file content :"
cat > $file

read -p "Enter the pattern to check" pat
grep -i $pat $file

read -p "Enter the pattern to check does it start first" patt
grep -i "^$patt" $file