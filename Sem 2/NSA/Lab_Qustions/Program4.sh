#!/bin/bash
if [ $# -eq 1 ]
then 
    if [ -f $1 ]
    then
    echo "Reverse of $1 "
    cat $1
    echo "->"
    tac $1
    else
    echo "No Content in file"
    fi
else
    echo "File doesn't exist"
fi