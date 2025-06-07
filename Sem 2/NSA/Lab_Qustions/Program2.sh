#!/bin/bash
while true
do
    read -p "Enter the numbers :" a b
    read -p "Enter the operator :" op
    case $op in
    "+")
        ans=$( echo "$a + $b" | bc );;
    "-")
        ans=$( echo "$a - $b" | bc );;
    "*")
        ans=$( echo "$a * $b" | bc );;
    "/")
        ans=$( echo "Scale=2; $a / $b " | bc);;
    *)
    exit 1;;
    esac
echo "$a $op $b = $ans"
done

