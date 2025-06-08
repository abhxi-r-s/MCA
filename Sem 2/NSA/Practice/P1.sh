read -p "Enter the file name" file
cat > $file
awk "NR==2" $file

awk "{print $1 $3 }" $file

awk  "/error/" $file
