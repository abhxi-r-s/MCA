dir="C:\Users\abhis\Desktop\NSA"

count=0

for entry in "$dir"/*
do
        if [ -f $entry ]
        then
                count=$((count + 1))
        fi
done

echo "Number of files in this directory is $count" 