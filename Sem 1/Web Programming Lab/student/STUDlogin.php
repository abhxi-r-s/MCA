<?php
include("database.php");
session_start();
    if($_SERVER["REQUEST_METHOD"]=="POST")
    {
        $user=$_POST["username"];
        $pass=$_POST["password"];

        $sql="SELECT * FROM registration WHERE username='$user' and password='$pass'";
        $result=mysqli_query($conn,$sql);

        if (mysqli_num_rows($result) > 0)
        {
            $row = mysqli_fetch_assoc($result);
            $_SESSION["name"] = $row['name'];
            header('Location: loginedpage.php');
            exit();
        } else {
            echo "Invalid username and password";
        }
    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>
</head>
<body>
    <center><h2>LOGIN PAGE</h2></center>
    <center>
        <form action="STUDlogin.php" method="post">
            <label for="">Login Id</label>
            <input type="text" name="username"><br><br>
            <label for="">Password :</label>
            <input type="password" name="password"><br><br>
            <input type="submit" value="Submit">
        </form>
    </center>
</body>
</html>
