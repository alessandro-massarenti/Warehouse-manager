<?php

/*
    A simple warehouse manager
    Made by Alessandro Massarenti
    
    If you need help setting it up, contact me on GitHub
*/

class Db
{
    // Properties
    private static $ready = false;
    private static $servername = "";
    private static $username = "";
    private static $password = "";

    private $dbname;
    private $connection;

    // Methods

    public function setup()
    {
        // Setup the db        
    }

    protected function connect()
    {

        $mysqli = new mysqli(self::$servername, self::$username, self::$password, $this->dbname);

        if ($mysqli->connect_error) {
            exit('Error connecting to database');
            mysqli_report(MYSQLI_REPORT_ERROR | MYSQLI_REPORT_STRICT);
        }
        $mysqli->set_charset("utf8mb4");

        $this->connection = $mysqli;
    }
}
