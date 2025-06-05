#!/bin/bash
read -p "Enter the number :" a
if [ $((a%2)) -eq 0 ]
    then 
    echo "$a is Even"
else
    echo "$s is Odd"
fi