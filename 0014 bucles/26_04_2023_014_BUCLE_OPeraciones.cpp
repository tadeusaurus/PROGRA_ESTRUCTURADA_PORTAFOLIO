// 26_04_2023_014_BUCLE_OPeraciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <locale.h>
#include <Windows.h>
#include <iostream>
#include <math.h>
#include <string>

int main()
{
    int aux = 3, aux2 = 0;
    int opc = 0;
    int num1 = 0, num2 = 0, res = 0;


    while (true)
    {
        std::cout << "Hola que quieres hacer? 1.- Calculadora con creditos \n2.- Contar hasta 100 lento \n3.- Contar de 10 en 10\n ";
        std::cin >> opc;
        switch (opc)
        {
        case 1: // Calculadora
            //Tener una calculadora que solo haga 3 operaciones.
            while (aux != 0)
            {
                //Algoritmo de la calculadora
                std::cout << "Ingresa 1 para suma 2 para resta\n";
                std::cin >> opc;
                switch (opc)
                {
                case 1:
                    std::cout << "Dame el primer numero a sumar\n";
                    std::cin >> num1;
                    std::cout << "Dame el segundo numero a sumar\n";
                    std::cin >> num2;
                    res = num1 + num2;
                    std::cout << "El resultado de la suma es: " << res << std::endl;
                    break;
                case 2:
                    std::cout << "Dame el primer numero a restar\n";
                    std::cin >> num1;
                    std::cout << "Dame el segundo numero a restar\n";
                    std::cin >> num2;
                    res = num1 - num2;
                    std::cout << "El resultado de la resta es: " << res << std::endl;

                case 3:
                    res = num1 * num2;
                    std::cout << "el resultado es  " << res << std::endl;
                    break;

                }
                std::cout << "Gastaste un crédito\n";
                aux--;
            }
            std::cout << "Terminaste tus créditos\n";
            //algoritmo para recargar creditos o continuar.
            std::cout << "Quieres recargar tus créditos?\n 1.- Si 2.- No";
            std::cin >> aux2;
            if (aux2 == 1)
            {
                aux = 3;
                std::cout << "Tus créditos son: " << aux << std::endl;
            }
            else if (aux2 == 2)
            {
                std::cout << "Que le vaya bien\n";
            }
            else
            {
                std::cout << "no recibi una respuesta valida bay\n";
            }

            break;
        case 2:

        {
            for (int i = 1; i <= 100; i++) {
                std::cout << i << std::endl;
                _sleep(100);

            }
        }
        break;
        case 3: // Contar de 10 en 10

            std::cout << "Estas en el contador de 10 X 10\n";
            {
                for (int i = 10; i <= 100; i++) {
                    std::cout << i << std::endl;
                    _sleep(100);
                }


            }
            break;
        default:
            break;
        }
        system("pause");
        system("cls");
    }


}


	

















