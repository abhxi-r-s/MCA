<?php
include("database.php");

if($_SERVER["REQUEST_METHOD"]=="POST")
{
    $name=$_POST["tname"];
    $address=$_POST["address"];
    $phone=$_POST["tnum"];
    $pass=$_POST["pass"];
    $sub=$_POST["sub"];

    $sql="INSERT INTO teacher(tname,taddress,tphone,tpass,tsub)VALUES('$name','$address','$phone','$pass','$sub')";

    $result=mysqli_query($conn,$sql);
    if($result)
    {
        echo "Registered Successfully";
    }
    else{
        echo "Unable to register";
    }
}
mysqli_close($conn);
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body> <center><h1>TEACHER REGISTRATION</h1></center>
    <form action="" method="post" onsubmit="return validate()">
        <label for="">ENTER NAME:</label>
        <input type="text" id="tname" name="tname"><br><br>
        <label for="">ENTER THE ADDRESS:</label>
        <input type="text" name="address"><br><br>
        <label for="">ENTER THE PHONE NUMBER :</label>
        <input type="number" name="tnum"><br><br>
        <label for="">ENTER THE PASSWORD:</label>
        <input type="password" name="pass"><br><br>
        <label for="">ENTER THE SUBJECT :</label>
        <input type="text" name="sub">
        <br><br>
        <input type="submit" name="submit">
    </form>
    <label for="">Already Registered ?</label>
    <a href="teacherlogin.php">Click here!</a>
    <script src="validation.js"></script>
</body>
</html>