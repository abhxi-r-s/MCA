#!/bin/bash
if [ $# -eq 1 ]
then
    who > user.1st
    echo $1 "user logged in"
    grep -c $1 user.1st
else
    echo "Enter username"
fi