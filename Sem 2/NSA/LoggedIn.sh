#!/bin/bash
if [ $# -eq 1 ]
then
    who > user.1st
    echo "$1 user logged In"
    grep -c 1st user.1st
else
    echo "please enter the user"
fi