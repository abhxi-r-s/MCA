#!/bin/bash
read -p "Enter the name of the database: " db

i="y"
while [ "$i" = "y" ]
do
    clear
    echo "=============================="
    echo "       Simple DB Manager       "
    echo "=============================="
    echo "1. View Database"
    echo "2. View Specific Record"
    echo "3. Add Record"
    echo "4. Delete Record"
    echo "5. Exit"
    echo "=============================="
    read -p "Enter your choice: " ch

    case $ch in
        1)
            echo "----- Database Content -----"
            cat "$db"
            ;;
        2)
            read -p "Enter the ID: " id
            grep -i "^$id" "$db"
            ;;
        3)
            read -p "Enter ID: " sid
            read -p "Enter Name: " sname
            echo "$sid $sname" >> "$db"
            echo "Record added."
            ;;
        4)
            read -p "Enter ID to delete: " id
            grep -v "^$id" "$db" > temp_db
            mv temp_db "$db"
            echo "Record deleted if it existed."
            ;;
        5)
            echo "Exiting..."
            exit 0
            ;;
        *)
            echo "Invalid choice."
            ;;
    esac
    echo
    read -p "Do you want to continue? (y/n): " i
done
