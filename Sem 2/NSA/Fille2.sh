#!/bin/bash
read -p "Enter the file name :" eg1
echo "1001 RAM 97" >> "$eg1"
echo "1002 GOVIN 100" >> "$eg1"
echo "1003 HARI 95" >> "$eg1"
echo "1004 RAMU 96" >> "$eg1"
echo "1005 AAKASH 99" >> "$eg1"


cat $eg1