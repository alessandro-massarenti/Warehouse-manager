<?php

/*
    A simple warehouse manager
    Made by Alessandro Massarenti
    
    If you need help setting it up, contact me on GitHub
*/

spl_autoload_register('autoLoader');

function autoLoader($className){
    $url = $_SERVER['HTTP_HOST'].$_SERVER['REQUEST_URI'];

    if(strpos($url, 'includes') !== false){
        $path = '../classes/';
    }
    else {
        $path = 'classes/';
    }

    $extension = '.class.php';
    require_once $path . $className . $extension;
}