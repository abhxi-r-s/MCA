#!/bin/bash
read -p "Enter the number :" n
num=$n
while [ $n -gt 0 ]
    do
        digit=$((n%10))
        reverse=$((reverse*10+digit))
        n=$((n/10))
done
if [ $num -eq $reverse ]
then
    echo "Its a Palindrome"
else
    echo "Its not a Palindrome"
fi