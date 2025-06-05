#!/bin/bash
read -p "Enter First File Name :" file1
read -p "Enter Second file Name :" file2
read -p "Enter Third File Name :" file3
echo "Enter File 1 content :"
cat > "$file1"
echo "Enter Second File content :"
cat > "$file2"
diff -a "$file1" "$file2" > "$file3"
cat "$file3"