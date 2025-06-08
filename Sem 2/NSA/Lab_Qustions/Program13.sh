#!/bin/bash
read -p "Enter the  number :" a
num=$a
new=0
while [ $num -gt 0 ]
do
    rem=$(($num%10))
    new=$(($new*10+$rem))
    num=$(($num/10))
done
if [ $new -eq $a ]
then
    echo "$a is a Palindrome"
else
    echo "$a is not a palindrome"
fi