<?php
include("database.php");
session_start();
    if($_SERVER["REQUEST_METHOD"]=="POST")
    {
        $name=$_POST["name"];
        $pass=$_POST["password"];

        $sql="SELECT * FROM registration WHERE name='$name' AND password='$pass'";
        $result=mysqli_query($conn,$sql);

        if(mysqli_num_rows($result)>0)
        {
            $row=mysqli_fetch_assoc($result);
            $_SESSION['name']=$row['name'];
            header('Location:welcome.php');
        }
        else
        {
            echo "Error in login credentials";
        }
    }
?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="userlogin.php" method="post">
        <label for="">Name:</label>
        <input type="text" name=name><br><br>
        <label for="">Password</label>
        <input type="password" name="password"><br><br>
        <input type="submit" value="SUBMIT">

    </form>
</body>
</html>