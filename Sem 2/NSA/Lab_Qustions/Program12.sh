#!/bin/bash
read -p "Enter the number :" a
# fact=1
# while [ $a -gt 0 ]
# do
#     fact=$(($fact*$a))
#     a=$(($a-1))
# done
# echo "Factorial is $fact"

fact=1
for i in $( seq 1 $a )
do
    fact=$(( $fact * $i))
done
echo "Factorial is $fact"