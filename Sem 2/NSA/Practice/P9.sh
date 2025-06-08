#!/bin/bash

read -p "Enter the String :" str
lowerstr=$( echo $str | tr "A-Z" "a-z")
vowel=0
consonant=0
len=${#str}
for((i=0;$i<$len;i++))
do
    char=${lower:$i:1}
    if [[ $char=="a" || $char=="e" || $char=="i" || $char=="o" || $char=="u" ]]
    then
    vowel=$(($vowel+1))
    else
    consonant=$(($consonant+1))
    fi
done
echo "$vowel $consonant"