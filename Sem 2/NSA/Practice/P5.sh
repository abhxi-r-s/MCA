#!/bin/bash

read -p "Enter the number :" num
is_prime=1
if [ $num -le 1 ] 
then
    echo "It is not a Prime Number "
else
    for((i=2; $i*$i<=$num; i++))
    do
        if [ $((num%i)) -eq 0 ]
        then
        is_prime=0
        break
        fi
    done
if [ $is_prime -eq 1 ]
then 
    echo "$num is prime"
else
    echo "$num is not prime"
fi
fi