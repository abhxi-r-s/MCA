#!/bin/bash
read -p "Enter the string:" str
read -p "Enter the starting and ending of the string :" a b

substr=${str:$a:$b}
echo "Substring is : $substr"