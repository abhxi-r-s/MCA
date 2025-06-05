#!/bin/bash
read -p "Enter the directory name :" dir
for filename in "C:\Users\abhis\Desktop\NSA/$dir"
do
    if [ -d "$filename" ]
        then
        echo "$filename is a directory"
    else
        echo "$filename is a file"
    fi
done
