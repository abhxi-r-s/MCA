#!/bin/bash
read -p "Enter the directory :" dir
i="C:/Users/abhis/Desktop/MCA LAB/Sem 2/NSA/$dir"

if [ -d "$i" ]
then
num_files=$(find "$i" -type f | wc -l)
echo "Number of files are $num_files"
else
echo "Not a  directory"
fi
