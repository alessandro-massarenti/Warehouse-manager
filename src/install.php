<!--
    A simple warehouse manager
    Made by Alessandro Massarenti
    
    If you need help setting it up, contact me on GitHub
-->

<?php

include_once "assets/engine/includes/class-autoloader.inc.php";

// Sanity check.
if (false) {
    ?>
    <!DOCTYPE html>
    <html>

    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
        <title>Error: PHP is not running</title>
    </head>

    <body>
        <h1>Error: PHP is not running</h1>
        <p>Warehouse-manager requires that your web server is running PHP. Your server does not have PHP installed, or PHP is turned off.</p>
    </body>

    </html>
<?php
}
?>



isset( $_POST['weblog_title'] ) ? trim( wp_unslash( $_POST['weblog_title'] ) ) : '';