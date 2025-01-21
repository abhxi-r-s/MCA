<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Factorial</title>
</head>

<body>
<?php
  if($_SERVER["REQUEST_METHOD"]=="POST")
  {
    $nums=$_POST["num"];
    $fact=1;

    for($i=1;$i<=$nums;$i++)
    {
        $fact=$fact*$i;
    }
    echo "Factorial is".$fact;
  }  

?>
    <form action="sample.php" method="post">
    <label for="">ENTER THE NUMBER :</label>
    <input type="number" name="num">
    <input type="submit" name="submit">
    </form>
</body>

</html>