read -p "Enter the string :" str
len=${#str}

for((i=$len-1; $i>=0; i--))
do
    reverse="$reverse${str:$i:1}"
done
echo $reverse
if [ $str = $reverse ]
then
    echo "it is a palindrome"
else
    echo "it is not a palindrome"
fi