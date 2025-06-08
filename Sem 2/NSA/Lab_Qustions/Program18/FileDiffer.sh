#!/bin/bash

read -p "Enter the file 1 name :" file1
echo "Enter the file content :"
cat > $file1
read -p "Enter the file 2 name :" file2
echo "Enter the file cotent :"
cat > $file2
read -p "Enter the file name to paste the differ content :" file3
diff -a $file1 $file2 > $file3
cat $file3