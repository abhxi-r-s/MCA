<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
<?php
    if($_SERVER["REQUEST_METHOD"]=="POST")
    {
        $number=$_POST["number"];
        $fact=1;
        for($i=1;$i<=$number;$i++)
        {
            $fact=$fact*$i;
        }
    
    }
?>
    <h1>FACTORIAL OF A NUMBER </h1><br><br><hr>
    <form action="factorial.php" method="post">
    <label for="">Enter the Number :</label>
    <input type="number" name="number">
    <input type="submit" name="submit">
    <?php
    if(isset($number))
    {
        echo "Factorial of ".$number."=".$fact;
    }
    ?>
    </form>
</body>
</html>