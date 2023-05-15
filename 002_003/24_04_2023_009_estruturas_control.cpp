// 24_04_2023_003_estruturas_control.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, resultado, opcion;
    bool mayor;
    
    setlocale(LC_ALL, "MX UTF-8")

    
    cout << "Ingrese el primer numero entero: "<< endl;
    cin >> num1;
    cout << "Ingrese el segundo numero entero: " << endl;
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
   
    cout << "es "<< resultado << endl;
    /*
int absVal;
    if (num >= 0) {
        absVal = num;
    } else {
        absVal = -num;
    }
    cout << "El valor absoluto es " << num << " es " << absVal << endl;

    return 0;
}
    */


}


