<?php
include("database.php");
session_start();
echo "Hi ",$_SESSION['name'];
?>
<?php
    if($_SERVER["REQUEST_METHOD"]=="POST")
    {
        $sname=$_POST['sname'];
        $roll=$_POST['snum'];
        $address=$_POST['sadd'];

        $sql="INSERT INTO student(sname,rollno,address)VALUES('$sname','$roll','$address')";
        $result=mysqli_query($conn,$sql);

        
    }
    mysqli_close($conn);
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Student Registration</title>
</head>
<body>
    <form action="studentreg.php" method="post">
        <label for="">ENTER NAME :</label>
        <input type="text" name="sname"><br><br>
        <label for="">ENTER ROLL NUMBER :</label>
        <input type="number" name="snum"><br><br>
        <label for="">ENTER ADDRESS :</label>
        <input type="text" name="sadd"><br><br>
        <input type="submit" name="SUBMIT">
    </form>
    <?php
    if(isset($result))
    {
        echo "REGISTERED SUCCESSFULLY";
    }
    
    ?>
        <a href="Welcome.php">Go Back<-</a>
    
</body>
</html>