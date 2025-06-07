#!/bin/bash
read -p "Enter the foldername :" dir
for i in "C:/Users/abhis/Desktop/MCA LAB/Sem 2/NSA/Lab_Questions/$dir"
do
    if [ -d "$i" ]
    then
    echo "Directory present"
    else 
    echo "Folder doesnt exist"
    fi
done