<?php
        if(isset($_POST['Register']))
        {
            $name=$_POST['name'];
            $email=$_POST['email'];
            $phone_number=$_POST['phone'];
            $password=$_POST['password'];
            $repassword=$_POST['repassword'];

            if($password!=$repassword)
            {
                echo "passwords do not match!";
            }
            else
            {
                $conn=mysqli_connect('localhost','root','','test1');
            
                if(!$conn)
                {
                    echo "cannot connect";
                }
                echo "Connection success";
                $q="INSERT INTO users(name,email,password,phone_number)VALUES('$name','$email','$password','$phone_number')";
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