<?php
    $db_SERVER="localhost";
    $db_USER="root";
    $db_PASS="";
    $db_NAME="kseb";

    $conn="";
    $conn=mysqli_connect($db_SERVER,$db_USER,$db_PASS,$db_NAME);

    if($conn)
    {
        echo "connected";
    }
    else
    {
        echo "not";
    }
?>