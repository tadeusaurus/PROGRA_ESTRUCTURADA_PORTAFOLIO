// E_consulta_27_03_2023.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool pregunta1 = false;
    float peso, estatura, imc;
    bool pregunta2 = false;
    bool pregunta3 = true;
    std::string nombre;
    std::string desayuno;
    char edad[2];
    int peso ;
    int estatura ;

    //string ------------------------------------------------
    std::cout << "hola te hare unas preguntas" << std::endl;
    std::cout << "cual es tu nombre ? " << std::endl;
    getline(std::cin, nombre);
    std::cout << nombre << std::endl;
    std::cout << " Que desayuno ?" << std::endl;
    getline(std::cin, desayuno);
    std::cout << "okey  " <<desayuno << std:: endl;
   
    //bool---------------------------------------------------
    std::cout << "se siente bien ? ";
    std::cout << "0)No 1)Si" << std::endl;
    std::cin >> pregunta1;
    std::cout << "le duele la cabeza ?  0)No 1)Si" << std::endl;
    std::cin >> pregunta2;
    std::cout << "okey"<<std::endl;
    std::cout << "le duele el estomago ?  0)No 1)Si " << std::endl;
    std::cin >> pregunta3;
    
    //char----------------------------------------------------
    std::cout << "Que edad tienes?" << std::endl;
    std::cin >> edad;
    
    //int----------------------------------------------------
    std::cout << "cuanto pesas?" <<std::endl;
    std::cin >> peso;
    std::cout << "cuanto mides?"<<std::endl;
    std::cin >> estatura;
    
    // Calculamos el IMC
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;

    cout << "Ingrese su estatura en metros: ";
    cin >> estatura;

    imc = peso / (estatura * estatura);

    cout << "Su IMC es: " << imc << endl;

    return 0;

    
}

