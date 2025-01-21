<?php
include("database.php");

    if($_SERVER["REQUEST_METHOD"]=="POST")
    {
        $name=$_POST["name"];
        $pass=$_POST["password"];
        $phone=$_POST["phone"];

        $sql="INSERT INTO registration(name,password,phoneno)VALUES('$name','$pass','$phone')";
        $result=mysqli_query($conn,$sql);
        if($result)
        {
            echo "REGISTERED SUCCESSFULLY";
        }
        else
        {
            echo "FAILED TO REGISTER";
        }

    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Registration Page</title>
</head>
<body>
    <form action="register.php" method="post">
        <label for="">Name :</label>
        <input type="text" name="name"><br><br>
        <label for="">Password :</label>
        <input type="password" name="password"><br><br>
        <label for="">Phone Number :</label>
        <input type="number" name="phoneno">
        <input type="submit" value="submit">
        </form>
     
    
</body>
</html>
<?php
mysqli_close($conn);
?>