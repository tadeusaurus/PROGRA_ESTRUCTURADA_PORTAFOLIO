// P17_Matriz_19_05_2023.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <Windows.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>

int main() {
    
    
    int filas, columnas;
   
    std::cout << "Ingrese el número de filas (mínimo 1): ";
    std::cin >> filas;

    std::cout << "Ingrese el número de columnas (mínimo 1): ";
    std::cin >> columnas;

    // Validación del tamaño de la matriz
    if (filas < 1 || columnas < 1) {
        std::cout << "El tamaño de la matriz no es válido." << std::endl;
        return 0;
    }

    // Crear la matriz
    int** matriz = new int* [filas];

    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }

    
    srand(time(NULL)); 

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i < 3 && j < 3) {
                std::cout << "Ingrese el valor para la posición [" << i << "][" << j << "]: ";
                std::cin >> matriz[i][j];
            }
            else {
                matriz[i][j] = rand() % 100; 
            }
        }
    }

    std::cout << "Matriz generada:" << std::endl;

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
