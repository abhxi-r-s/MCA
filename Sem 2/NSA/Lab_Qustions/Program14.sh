#!/bin/bash
read -p "Enter the llimit :" n
a=0
b=1
for i in $( seq 1 $n ) 
do
    c=$(($a+$b))
    echo $a " ";
    a=$b
    b=$c
done