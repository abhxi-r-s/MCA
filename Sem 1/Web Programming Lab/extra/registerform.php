<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="registerform.css">
</head>
<body>
    <div>
    <form action="" method="POST">
        <h2>Registration form</h2>
        <label for="name">Name :</label>
        <input type="text" name="name"><br><br>
        <label for="email">Email :</label>
        <input type="email" name="email"><br><br>
        <label for="phone">Phone no :</label>
        <input type="number" name="phone"><br><br>
        <label for="password">Password :</label>
        <input type="password" name="password"><br> <br>
        <label for="repassword">Repassword :</label>
        <input type="password" name="repassword"><br><br>
        <input type="submit" name="Register"><br><br>
    </form>
    </div>
        <h3>If already registered, <a href="login.php">login here</a></h3>
        <?php
        if(isset($_POST['Register']))
        {
            $name=$_POST['name'];
            $email=$_POST['email'];
            $phone=$_POST['phone'];
            $password=$_POST['password'];
            $repassword=$_POST['repassword'];

            if($password!=$repassword)
            {
                echo "passwords do not match!";
            }
            else
            {
                $conn=mysqli_connect('localhost','root','','registration');
            
                if(!$conn)
                {
                    echo "cannot connect";
                }
                echo "Connection success";
                $q="INSERT INTO registration(name,email,password,repassword,phone)VALUES('$name','$email','$password','$repassword','$phone')";
                $query=mysqli_query($conn,$q);
                if($query){
                    echo "<h2>Registered!</h2>";
                }
                else{
                    echo "<h2>Cannot register!</h2>";
                }
                mysqli_close($conn);

            }
        }
        ?>
</body>
</html>