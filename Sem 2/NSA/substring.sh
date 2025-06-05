#!/bin/bash
read -p "Enter the Sttring to find substring :" str
read -p "Enter the starting index and number of letters needed :" a b
substring=${str:$a:$b}
echo $substring