#!/bin/bash
read -p "Enter the File name :" file1
echo "Enter the contents of the File :"
cat > $file1
read -p "Enter the exiting file name :" file2
cp $file1 $file2
cat $file2