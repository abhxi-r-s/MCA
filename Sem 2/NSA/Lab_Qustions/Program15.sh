#!/bin/bash

read -p "Enter the string :" str
len=${#str}

for((i=$len-1; $i>=0; i--))
do
    reverse="$reverse${str:$i:1}"
done
echo $reverse