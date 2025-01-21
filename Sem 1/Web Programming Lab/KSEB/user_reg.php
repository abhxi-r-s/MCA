<?php
include("database.php");

    if($_SERVER["REQUEST_METHOD"]=="POST")
    {
        $user=$_POST['username'];
        $pass=$_POST['password'];
        $phone=$_POST['phone'];

        $sql="INSERT INTO user(uname,password,phoneno,bill)VALUES('$user','$pass','$phone','')";
        $result=mysqli_query($conn,$sql);
        if($result)
        {
            echo "Registered Successfully...";
        }
        else{
            echo "registration failed";
        }
    }


mysqli_close($conn);
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>User Registration</title>
</head>
<body>
    <form action="user_reg.php" method="post">
        <label for=""name="username">Username :</label>
        <input type="text" name="username">
        <label for=""name="password">Password :</label>
        <input type="password" name="password">
        <label for=""name="phone">Phone Number :</label>
        <input type="text" name="phone">
        <input type="submit" name="submit">
    </form>
    
</body>
</html>
