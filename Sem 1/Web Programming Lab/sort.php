<?php

$values=array(9,7,8,2,3,5,2);
$length=count($values);

for($i=0;$i<$length;$i++)
{
     if($values[$i]>$values[$i+1])
     {
        $temp=$values[$i+1];
        $values[$i+1]=$values[$i];
        $values[$i]=$temp;

     }

}
for($i=0;$i<$length;$i++)
{
    echo $values[$i];
}

?>