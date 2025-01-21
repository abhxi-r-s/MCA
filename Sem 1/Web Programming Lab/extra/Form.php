<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Register</title>
</head>
<body>
    <form action="">
        <label for="username">Username:</label>
        <input type="text" id="username" name="username" required>
        
        <label for="password">Password:</label>
        <input type="password">

        <button type="button"> SUBMIT</button>
    </form>
    
</body>
</html>

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    
    $username = $_POST['username'];
    $password = $_POST['password'];

    
    $conn = mysqli_connect('localhost', 'root', '', 'dbname'); 
    if (!$conn) {
        die("Connection failed: " . mysqli_connect_error());
    }

    $q = "SELECT * FROM users WHERE username = '$username'";
    $query = mysqli_query($conn, $q);

    if (mysqli_num_rows($query) > 0) {
        echo "Username already exists.";
    } else {
        $hashed_password = password_hash($password, PASSWORD_DEFAULT);

         $insert_query = "INSERT INTO users (username, password) VALUES ('$username', '$hashed_password')";

        if (mysqli_query($conn, $insert_query)) {
            echo "Registration successful!";
        } else {
            echo "Error: " . mysqli_error($conn);
        }
    }

    
    mysqli_close($conn);
}
?>
