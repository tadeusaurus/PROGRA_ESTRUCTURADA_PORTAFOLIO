// P16_15_05_2023_Lib.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// 2023_05_15_011_Anidados.cpp : 
// Mau Cabrera
// Ciclos y Decisiones anidadas

#include <iostream>
#include <string>

int main()
{
    std::string Titulo[5];
    std::string Autor[5];
    int Fecha[5];
    //Captura de datos
    std::cout << "Hola usuario registra tus libros favoritos\n";
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Ingresa el titulo del libro " << i + 1 << std::endl;
        if (i > 0)
        {
            std::cin.ignore();
        }
        getline(std::cin, Titulo[i]);
        std::cout << "Ingresa el Autor del libro " << i + 1 << std::endl;
        getline(std::cin, Autor[i]);
        std::cout << "Ingresa La fecha de publicación del libro aaaammdd" << std::endl;
        std::cin >> Fecha[i];
    }
    //Función de muestreo de la información
    std::cout << "Ya veo tus libros son\n ";
    for (int j = 0; j < 5; j++)
    {
        std::cout << j + 1 << ".- " <<
            Titulo[j] << "\nEl autor es: " << Autor[j] << "\nPublicado el dia " << Fecha[j] << std::endl;
    }
}