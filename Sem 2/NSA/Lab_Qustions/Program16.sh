#!/bin/bash
read -p "Enter the numbers :" a b
if [ $a -gt $b ]
then
    num=$b
else
    num=$a
fi
for((i=$num;i>=0;i--))
do
    if [ $(($a%$i)) -eq 0 -a $(($b%$i)) -eq 0 ]
    then 
        gcd=$i
        break
    fi
done
lcm=$((($a*$b) / $gcd))
echo "GCD AND LCM OF $a and $b is $gcd , $lcm"