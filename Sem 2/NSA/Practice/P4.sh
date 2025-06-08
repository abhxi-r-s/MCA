#!/bin/bash

read -p "Enter the length and breadth" l b
area=$(($l*$b | bc))

echo "Area is $area"