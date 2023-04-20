// 19_04_2023_003_MAYOR _MENOR.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, resultado, opcion;
    bool mayor;

    // Pedimos al usuario que ingrese dos números enteros
    cout << "Ingrese el primer numero entero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;
   
    if (num1 > num2)
    {
        mayor = true;
    }
    else
    {
        mayor = false;

    }
    if (mayor)
    {
        cout << "El primer numero es mayor que el segundo." << endl;
    }
    else
    {
        cout << "El segundo numero es mayor que o igual" << endl;
    }

    

}
