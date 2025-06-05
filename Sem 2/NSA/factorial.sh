#!/bin/bash
read -p "Enter the number :" n
f=1
for i in $(seq 1 $n)
do
    f=$((f*i))
done
echo $f