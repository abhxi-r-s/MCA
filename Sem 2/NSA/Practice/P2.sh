read -p "Enter the string :" str
read -p "Enter the starting and ending of substring : " a b

substring=${str:$a:$b}
echo $substring