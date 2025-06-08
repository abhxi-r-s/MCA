#!/bin/bash

read -p "Enter the string :" str

lower=$( echo $str | tr "A-Z" "a-z" )

upper=$( echo $str | tr "a-z" "A-Z" )

echo $lower
echo $upper