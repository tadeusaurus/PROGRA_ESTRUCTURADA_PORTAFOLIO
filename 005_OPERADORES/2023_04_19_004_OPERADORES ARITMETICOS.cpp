// 2023_04_19_004_OPERADORES ARITMETICOS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//ATENCION!! POSIBLES CAMBIOS NO ES EL OFICIAL !!!!
// 
#include <iostream>
using namespace std;

int main()
{

    int num1, num2, resultado;
    int opcion; 
    std::cout << "Hola \ bienvenido a operaadores aritmeticos " << std::endl;
    std::cout << "Hola \ INGRESA 2 NUMEROS ENTEROS" << std::endl;
    
    //pedir datos
    cout << "Ingrese el primer numero entero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;

    std::cout << "1.MENU" << std::endl;
    std::cout << "2.sumar" << std::endl;
    std::cout << "3.restar" << std::endl;
    std::cout << "4.multiplicar" << std::endl;
    std::cout << "5.dividir" << std::endl;

    switch (opcion)     
    {
    case 1:
        resultado = num1 + num2;
        cout << "el resultado es  " << resultado << endl;
    case 2:
        resultado = num1 - num2;
        cout << "el resultado es  " << resultado << endl;
    case 3:
        resultado = num1 * num2;
        cout << "el resultado es  " << resultado << endl;
    case 4:
        resultado = num1 * num2;
        cout << "el resultado es  " << resultado << endl;
    case 5:
        resultado = num1 % num2;
        cout << "el resultado es  " << resultado << endl;
        break;

    default:
        std::cout << "SOLOT TENIAS QUE HACER UNA SOLA COSA Y FALLASTE" << endl;
        break;

    }

        return;
   
}