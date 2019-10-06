<!--
    A simple warehouse manager
    Made by Alessandro Massarenti
    
    If you need help setting it up, contact me on GitHub
-->

<?php

    include_once "assets/engine/includes/class-autoloader.inc.php";
    if(!is_writable("inc/db_connect.php"))
        {
            $error_msg="<p>Sorry, I can't write to <b>inc/db_connect.php</b>.
            You will have to edit the file yourself. Here is what you need to insert in that file:<br /><br />
            <textarea rows='5' cols='50' onclick='this.select();'>$connect_code</textarea></p>";
            }
        else
        {
        $fp = fopen('inc/db_connect.php', 'wb');
        fwrite($fp,$connect_code);
        fclose($fp);
        chmod('inc/db_connect.php', 0666);
    }

    Db::setup();
?>

<?php
    $protected = false;
    require_once "assets/bodywork/bodyparts/head.html";
?>

<!DOCTYPE html>
<html>
    <head>
        <?php require_once "assets/bodywork/bodyparts/head.html"; ?>

    </head>
    <body>

    </body>
</html>
