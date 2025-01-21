<?php
include("database.php");
    if($_SERVER["REQUEST_METHOD"]=="POST")
    {
        $name=$_POST["name"];
        $address=$_POST["address"];
        $phone=$_POST["phone"];
        $email=$_POST["email"];
        $bday=$_POST["date"];
        $username=$_POST["username"];
        $password=$_POST["password"];

        $sql="INSERT INTO registration(name,address,phoneno,email,bday,username,password) VALUES('$name','$address','$phone','$email','$bday','$username','$password')";
        $result=mysqli_query($conn,$sql);

        if($result)
        {
            echo "Registered";
        }
        else{
            echo "unable to register";
        }


    }


mysqli_close($conn);
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>registration</title>
</head>
<body>
    <center><h2>REGISTRATION FORM</h2></center>
<center>
    <form action="registration.php" method="post">
        <label for="">NAME:</label>
        <input type="text" name="name"><br><br>
        <label for="">ADDRESS:</label>
        <input type="textarea" name="address"><br><br>
        <label for="">PHONE NUMBER:</label>
        <input type="number" name="phone"><br><br>
        <label for="">e-MAIL:</label>
        <input type="text" name="email"><br><br>
        <label for="">BIRTHDAY:</label>
        <input type="date" name="date"><br><br>
        <label for="">USERNAME:</label>
        <input type="text" name="username"><br><br>
        <label for="">PASSWORD:</label>
        <input type="password" name="password"><br><br>
        <input type="submit" value="SUBMIT">
    </center>

    </form>
</body>
</html>

