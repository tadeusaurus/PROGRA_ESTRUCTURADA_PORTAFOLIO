// 24_04_2023_010.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
#include <locale.h>

int main()
{
    //variables de correo y cotraseña
    setlocale(LC_ALL, "UTF-8");
    std::string correo ; 
    std::string contra ;
    std::cout << "hola" << "\n";
    std::cout << "ingres tu correo" << std::endl;
    std::cin >> correo;
    //pedir correo 
    if (correo == "tadeo.caden@gmail.com") {
        //si es correcto pedir contraseña
        std::cout << "ingresa tu contraseña" << std::endl;
        std::cin >> contra;
        if (contra == "hola") {

            std::cout << "BIENVENIDO" << std::endl;

        }
        else { 
            std::cout << "no es valida" << std::endl;

        }
    //si no es correcto terminar programa y decir que es incorrecto
    }
    else {
        std::cout << "tu usuario es incorrecto";
    }
  













}


