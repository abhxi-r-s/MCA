<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <center><h2>VIEW STUDENTS DETAILS</h2></center>
</head>
<body>
    <form action="viewstudent.php" method="post">
        <input type="submit" value="VIEW STUDENT">
    </form>
</body>
</html>
<?php
include("database.php");

if($_SERVER["REQUEST_METHOD"]=="POST")
{
    $sql="SELECT * FROM student";
    $result=mysqli_query($conn,$sql);
    echo"<table border=2>";
    echo "<tr><td>ID</td><td>NAME</td><td>ROLL NUMBER</td><td>ADDRESS</td><td>MARK</td></tr>";
    if(mysqli_num_rows($result)>0)
    {
        while ($row = mysqli_fetch_assoc($result)) 
        {
            echo "<tr><td>". $row['id'] ."</td><td> " . $row['sname'] . "</td><td> " . $row['rollno'] . "</td><td>" . $row['address'] . "</td><td>" . $row['mark'] . "</td></tr>";
           
        }
        
    }
    echo "</table>";
}
mysqli_close($conn);
?>

<html>
<head>
    
</head>
<body>
<a href="Welcome.php">Go Back<-</a>
</body>
</html>
