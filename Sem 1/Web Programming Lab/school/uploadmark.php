<?php
include("database.php");
   if($_SERVER["REQUEST_METHOD"]=="POST")
   {
    $id=$_POST['opt'];
    $mark=$_POST['mark'];
    $sql = "UPDATE student SET mark='$mark' WHERE id='$id'";
    $result=mysqli_query($conn,$sql);
    if($result)
    {
        echo "Marks Uploaded";
    }
    
   }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Upload mark</title>
    <center><h2>UPLOAD STUDENTS's MARK</h2></center>
    
</head>
<body>
<form action="uploadmark.php" method="post">
    <label for="">SELECT STUDENT NAME :</label>
        <select name="opt">
           <?php
           $sql="SELECT * FROM student";
           $result=mysqli_query($conn,$sql);
           while($row=mysqli_fetch_assoc($result)) {
           ?>
           <option value="<?php echo $row['id']?>"><?php echo $row['sname']?></option>
        <?php
           }
        ?>
        </select><br><br>
        <label for="">ENTER MARK :</label>
        <input type="number" name="mark"><br><br>
        <input type="submit" name="SUBMIT">

    </form>
    <a href="Welcome.php">Go Back<-</a>
</body>
</html>
<?php
mysqli_close($conn);
?>