<!DOCTYPE html>
<html lang="en">
<head>
    <title>Document</title>

</head>
<body>
    <form action=" " method="POST">
        <input type="number" name="number" placeholder="Enter the number to find factorial">
        <input type="submit">
        <input type="reset">
    </form>
    <?php
    $n=$_POST['number'];

    function factorial($x)
    {
        if($x==0){
            return 1;

        }
        return $x *factorial($x-1);
    }
    echo "The factorial is".factorial($n);
    ?>
    
</body>
</html>