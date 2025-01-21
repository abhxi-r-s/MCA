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
        <label for="name">Username :</label>
        <input type="text" name="name"><br><br>
        
        <label for="password">Password :</label>
        <input type="password" name="password"><br> <br>
        
        <input type="submit" name="Register"><br><br>
    </form>
    </div>
        <h3>If already registered, <a href="login.php">login here</a></h3>
        <?php
        if(isset($_POST['Register']))
        {
            $name=$_POST['name'];
            
            $password=$_POST['password'];
            

          
        
            
                $conn=mysqli_connect('localhost','root','','registration');
            
                if(!$conn)
                {
                    echo "cannot connect";
                }
                echo "Connection success";
                $q="SELECT* FROM registration WHERE name='$name' AND password='$password'";
                $query=mysqli_query($conn,$q);
                if($query){
                    echo "<h2>Login Successfull!,Welcome {$name}</h2>";
                }
                else{
                    echo "<h2>Failed!</h2>";
                }
                mysqli_close($conn);

            }
        
        ?>
</body>
</html>