<?php
include("database.php");
if($_SERVER["REQUEST_METHOD"]=="POST")
{
    $user=$_POST['username'];
    $pass=$_POST['password'];

    $sql="SELECT* FROM user WHERE uname='$user'AND password='$pass'";
    $result=mysqli_query($conn,$sql);

    if($result->num_rows>0)
    {
        echo "Login success";
    }
}

mysqli_close($conn);
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>User Login</title>
</head>
<body>
    <form action="userlogin.php" method="post">
        <label for=""name="username">Username :</label>
        <input type="text"name="username">
        <label for=""name="password">Password :</label>
        <input type="password"name="password">
        <input type="submit">

    </form>
    
</body>
</html>