
// 22_03_2023_IN_OUT_TADEO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <locale.h>
#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "es MX.UTF-8");
    std::cout << "hola" << std::endl;
    bool pregunta = false;
    std::cout << "lea y conteste con falso y verdadero si=1 no=0" << std::endl;
    std::cout << "comiste tacos anoche" << std::endl;
    std::cin >> pregunta;

    std::cout << "entoces si comiste tacos " << pregunta << " cenaste " << std::endl;
    int n_tacos = 0;
    std::cout << "cuantos tacos te comiste?"<<std::endl;
    std::cin >> n_tacos;
    std::cout<<"entoces te comiste  " << n_tacos << std::endl;
    float precio = 0;
    std::cout << "cuanto te costaron?" << std::endl;
    std::cin >> precio;
    std::cout << "entoces eso cuestan" << precio << std::endl;
    char tipo[9] = " ";
    std::cout << "de que tipo comiste" << std::endl;
    std::cin >> tipo;
    std::cout << "entoces de fueron de  "<< tipo << std::endl;
    std::string lugar;
    std::cout << "donde los comiste?" << std::endl;
    std::cin >> lugar;
    std::cout << "entonces ahi los comiste en "<<lugar<< std::endl;




}

