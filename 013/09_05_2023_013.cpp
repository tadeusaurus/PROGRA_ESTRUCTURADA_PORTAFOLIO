// 09_05_2023_013.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "UTF-8");
    std::string correo;
    std::string contra;
    
    
    for (int BU = 2; BU > 0;) {
        std::cout << "hola" << "\n";
        std::cout << "ingres tu correo" << std::endl;
        std::cin >> correo;

        if (correo == "tadeo.caden@gmail.com") {

            std::cout << "ingresa tu contraseña" << std::endl;
            std::cin >> contra;
            if (contra == "hola") {
   
                std::cout << "BIENVENIDO" << std::endl;

            }
            else {
                std::cout << "no es valida" << std::endl;

            }

        }
        else {
            std::cout << "tu usuario es incorrecto"<<std::endl;
        
        }
        //BORRAR Y VOLVER AL INICIO
        system ("pause");
        system("CLS");
    }
}


