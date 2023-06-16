// P17_Matriz_19_05_2023.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.


#include <locale.h>    
#include <Windows.h>  
#include <iostream>    
#include <cstdlib>    
#include <ctime> // Para inicializar la semilla de rand

int main() {
    setlocale(LC_ALL, "es-ES.UTF-8");  

    int opcion;
    std::cout << "Ingrese la opción de una" << std::endl;
    std::cout << "1. Matriz 3x3" << std::endl;
    std::cout << "2. Matriz 5x5 " << std::endl;
    std::cout << "3. Matriz 10x10" << std::endl;
    std::cout << "Opción: ";
    std::cin >> opcion; 

    int filas, columnas;

    switch (opcion) {
    case 1:
        filas = 3;
        columnas = 3;
        break;
    case 2:
        filas = 5;
        columnas = 5;
        break;
    case 3:
        filas = 10;
        columnas = 10;
        break;
    default:
        std::cout << "Opción inválida." << std::endl;
        return 0;
    }

    // Crear la matriz
    int** matriz = new int* [filas];

    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }

    if (opcion == 1) {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                std::cout << "Ingrese el valor para la posición [" << i << "][" << j << "]: ";
                std::cin >> matriz[i][j];
            }
        }
    }
    else {
        srand(time(NULL));

        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                matriz[i][j] = rand() % 11; // Relleno aleatorio entre 0 y 10
            }
        }
    }

    std::cout << "Matriz:" << std::endl;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}



