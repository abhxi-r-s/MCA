#!/bin/bash
read -p "Enter the File Name :" file
echo "Enter the content of the file :"
cat > $file
read -p "Enter the line number to print :" l
tail +$l $file