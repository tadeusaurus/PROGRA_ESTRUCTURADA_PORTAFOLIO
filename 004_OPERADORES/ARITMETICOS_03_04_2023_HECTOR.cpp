// ARITMETICOS_03_04_2023_HECTOR.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// 
#include <iostream>

int main()
{
    
    std::cout << "Hola \N CAMPO DE BATALLA " << std::endl;
    bool continuar = true;
    int Vida = 100;
    float ataque = 18.5;
    char nombre[15] = "TAD";
    std::string namertag = "Champsad";
 
    std::cout << "Hola " << nombre << " Bienvenido al mundo de " << namertag
        << std::endl;
    std::cout << std::endl;
    //Operadores Aritmeticos
    Vida = Vida - ataque;
    std::cout << "Tu vida restante es: " << Vida << std::endl;
    float Vida_Aux = 0;
    Vida_Aux = Vida - ataque;
    std::cout << "Tu vida_Aux restante es: " << Vida_Aux << std::endl;

}