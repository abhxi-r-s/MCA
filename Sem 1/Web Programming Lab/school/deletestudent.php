<?php
include("database.php");
if($_SERVER["REQUEST_METHOD"]=="POST")
{
    $id=$_POST['name'];
    $sql="DELETE FROM student WHERE id='$id'";
    $res=mysqli_query($conn,$sql);
    if($res)
    {
        echo "<script>alert('Deletion Successfull')</script>";
        header('Location:Welcome.php');
    }
    
}

?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Delete Student</title>
    <center><h2>DELETE STUDENT DETAILS</h2></center>
</head>
<body>
    
    <form action="deletestudent.php" method="post">
    <label for="">SELECT THE STUDENT :</label>
        <select name="name" id="">
            <?php
            $sql="SELECT * FROM student";
            $result=mysqli_query($conn,$sql);
            while($row=mysqli_fetch_array($result))
            {
            ?>
            <option value="<?php echo $row['id']?>"> <?php echo $row['sname']?></option>
            <?php
            }
            ?>
        </select>
        <input type="submit" value="DELETE">
    </form>
</body>
</html>
<?php
mysqli_close($conn);
?>