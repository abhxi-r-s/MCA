#!/bin/bash

read -p "Enter the directory " dir
for i in "C:/Users/abhis/Desktop/MCA LAB/Sem 2/NSA/Practice/$dir"
do
    if [ -d "$i" ]
    then
        echo "Directory"
    else
        echo "Not"
    fi
done