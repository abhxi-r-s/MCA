#!/bin/bash
read -p "Enter the File Name :" file
echo "Enter the file content :"
cat > $file
read -p "Enter the pattern to search :" pat
grep -ni $pat $file