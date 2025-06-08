#!/bin/bash

read -p "Enter the file name :" file1
echo "Enter the contents :"
cat > $file1
read -p "Enter the file name to copy data :" file2
cp $file2 $file1
cat $file1