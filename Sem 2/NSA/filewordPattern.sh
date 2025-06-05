#!/bin/bash
read -p "Enter the filename :" file
echo "Enter the content :"
cat > $file
read -p "Enter the word pattern :" s
grep -i $s $file