#!/bin/bash

if [ $# -eq 1 ]  #checks is there any content
then
    who > user.1st #who collects the users from the content
    echo "$1 user logged in" #$1 is the first line of the content
    grep -c $1 user.1st  #count number of $1 in the content
else
    echo "Please Enter username"
fi