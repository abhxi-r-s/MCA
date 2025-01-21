<?php
include("database.php");
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>WELCOME</title>
</head>
<body>
    
    <span> <h1><?php
    session_start();
    echo "Welcome  ",$_SESSION['name'];
    ?></h1></span>

    <label for=""><a href="studentreg.php"> REGISTER NEW STUDENTS :</a></label>
    
    <label for=""><a href="uploadmark.php">UPLOAD STUDENT'S MARK :</a></label>
    <label for=""><a href="viewstudent.php">VIEW STUDENTS LIST :</a></label>
    <label for=""><a href="deletestudent.php">DELETE STUDENT's DETAILS :</a></label>
        
</body>
</html>
<?php
mysqli_close($conn);
?>