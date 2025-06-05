#!/bin/bash
if [ $# -eq 1 ]
    then
    if [ -f $1 ]
        then
            echo "Reverse of the Content"
            cat $1
            echo "->"
            tac $1
    else
        echo "No content Found"
    fi
else
    echo "No file found"
fi

