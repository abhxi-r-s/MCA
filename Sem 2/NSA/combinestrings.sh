#!/bin/bash
read -p "Enter the First String :" s1
read -p "Enter the Second String :" s2
s3="$s1 $s2"
s3+=" How are you"
echo $s3
