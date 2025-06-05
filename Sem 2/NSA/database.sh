#!/bin/bash
i="y"
read -p "Enter the name of the database :" db
while [ $i = "y" ]
do
    clear
    echo "1.View Database"
    echo "2.View Specific Record"
    echo "3.Add Record"
    echo "4.Delete Record"
    echo "5.Exit"
    read -p "Enter your choice :" ch
    case $ch in
    1)cat $db;;
    2)read -p "Enter the Record Id:" id
    grep -i "$id" $db;;
    3)read -p "Enter the id:" id
    read -p "Enter the Name :" name
    read -p "Enter the designation :" desig
    read -p "Enter the college name :" clg
    echo "$id $name $desig $clg">>"$db";;
    4)read -p "Enter the id :"id
    grep -v "$id" $db >$db1
    echo "Record is Deleted"
    cat $db1;;
    5)exit;;
    *)echo "Invalid Choice "
    esac
    read -p "Do you want to continue :" i
    if [ $i != 'y']
    then
        exit
    fi
done

