#!/bin/bash
read -p "Enter the three numbers :" a b c
if [ $a -gt $b ] && [ $a -gt $b ]
    then
    echo " $a is largest "
elif [ $b -gt $a ] && [ $b -gt $c ]
    then
    echo " $b is largest "
else
    echo " $c is largest "
fi