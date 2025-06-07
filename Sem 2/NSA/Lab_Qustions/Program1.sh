#!/bin/bash
read -p "Enter the numbers :" a b c

if [ $a -gt $b ] && [ $a -gt $c ]
then
    echo "$a is the largest"
elif [ $b -gt $c ]
then
    echo "$b is the greatest"
else
    echo "$c is the greatest"
fi