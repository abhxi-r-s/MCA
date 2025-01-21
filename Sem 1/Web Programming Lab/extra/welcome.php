<html>
    <body>
        <?php
        session.start();
        echo "Welcome,",$_SESSION['name'];
        ?>
    </body>
</html>