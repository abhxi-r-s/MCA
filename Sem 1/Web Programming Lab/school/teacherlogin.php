<?php
include("database.php");
session_start();
    if($_SERVER["REQUEST_METHOD"]=="POST")
    {
        $name=$_POST["tname"];
        $pass=$_POST["pass"];

        $sql="SELECT* FROM teacher WHERE tname='$name' AND tpass='$pass'";
        $result=mysqli_query($conn,$sql);
        if(mysqli_num_rows($result)>0)
        {
            $row=mysqli_fetch_assoc($result);
            $_SESSION['name']=$row['tname'];
            header('Location:Welcome.php');
            exit(0);
            
        }
        else{
            echo "Invalid Credentials";
        }
    }

mysqli_close($conn);
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Teacher Login</title>
</head>
<body>
    <form action="teacherlogin.php" method="post">
    <label for="">Name:</label>
    <input type="text" name="tname"><br><br>
    <label for="">Password</label>
    <input type="password" name="pass"><br><br>
    <input type="submit" name="submit">

    </form>
</body>
</html>