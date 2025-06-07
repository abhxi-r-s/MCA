#!/bin/bash
read -p "Enter the number :" a
new=0
while [ $a -gt 0 ]
do
    rem=$(($a%10))
    new=$(($new*10 + $rem))
    a=$(($a / 10))
done
echo "Reverse of the number is : $new"