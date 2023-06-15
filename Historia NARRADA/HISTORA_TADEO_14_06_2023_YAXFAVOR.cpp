// HISTORA_TADEO_14_06_2023_YAXFAVOR.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "es-ES.UTF-8");
    int opcion;
    cout << "Eres un gato. Elige una opción:" << endl;
    cout << "1. Despertar a tu amo" << endl;
    cout << "2. Estirarte" << endl;
    cin >> opcion;
    cin.ignore();
    Sleep(2000);
    system("CLS");
    
    if (opcion == 1) {
        cout << "Te levantas y despiertas a tu amo." << endl;
        cout << "Tu amo te acaricia y te da de comer." << endl;
        cout << "Ahora le harás compañía." << endl;
    }
    else if (opcion == 2) {
        cout << "Elige hacia dónde quieres ir:" << endl;
        cout << "A. Cocina" << endl;
        cout << "B. Sala" << endl;
        cout << "C. Patio" << endl;
        opcion = getchar();
        cin.ignore();

        if (opcion == 'A') {
            cout << "¡Una mariposa! Genial." << endl;
            
            cout << R"(Y888888bo.._______:_____:_______..od888888Y'
            __8888888888b..____:____:____.d8888888888
            __88888Y'__`Y8b.____`__´___.d8Y'__`Y88888
            _Y88888__.db.__.Yb.__'..'__.dY.__.db.__8888Y
            ___`888__Y88Y____¨b_()_d¨___Y88Y__888´
            ____888b___' ________(.)_______'__.d888
            ___Y888888bd8g.'__.....':'.....__'.g8bd888888Y
            _______'Y'___.8.___....d()b....___.8.___'Y'
            ________.!__.8'_.db_.d..' : '..b._db._'8.__!.
            __________d88__'__.8_(.)_8.__'__88b
            ________d888b__.g8._.()._.8g.__d888b
            _______ : 888888888Y'______'Y888888888 :
            _______'!_8888888´________`8888888_!'
            _________'8Y__`'Y__________Y'´__Y8'
            ________'Y_______________________Y'
            ________!________________________!_)" << endl;

            cout << "Elige qué hacer:" << endl;
            cout << "1. Trepar sobre la cocina e ir por ella" << endl;
            cout << "2. Esperar a que baje un poco y tratar de saltar" << endl;
            opcion = getchar();
            cin.ignore();
            
            Sleep(3000);
            system("CLS");
            if (opcion == '1') {
                cout << "Has roto los platos. Tu dueño viene." << endl;
                cout << "Elige qué hacer:" << endl;
                cout << "A. Esconderte" << endl;
                cout << "B. Seguir la persecución" << endl;
                opcion = getchar();
                cin.ignore();

                if (opcion == 'A') {
                    cout << "Te has escondido tu amo no te encontro.Puedes seguir buscando." << endl;
                    cout << "Elige dónde buscar:" << endl;
                    cout << "1. Estudio" << endl;
                    cout << "2. Sala" << endl;
                    opcion = getchar();
                    cin.ignore();

                    if (opcion == '1') {
                        cout << "No hay nada en el estudio." << endl;
                    }
                    else if (opcion == '2') {
                        cout << "No esta la mariposa pero si tu dueño oh no¡" << endl;
                        cout << "Has sido atrapado¡¡" << endl;
                        cout << "fin" << endl;
                    }
                }
                else if (opcion == 'B') {
                    cout << "Te ha visto tu amo has sido atrapado y castigado." << endl;
                    return 0;
                }
            }
            else if (opcion == '2') {
                cout << "Has decidido esperar a que baje." << endl;
                cout << "Elige dónde buscar:" << endl;
                cout << "1. Estudio" << endl;
                cout << "2. Sala" << endl;
                opcion = getchar();
                cin.ignore();

                if (opcion == '1') {
                    cout << "¡Ahí está la mariposa en el estudio!" << endl;
                    cout << "Elige qué hacer:" << endl;
                    cout << "1. Rendirte" << endl;
                    cout << "2. Ir por ella" << endl;
                    opcion = getchar();
                    cin.ignore();

                    if (opcion == '1') {
                        cout << "Flojera, mejor regresamos a dormir." << endl;
                        return 0;
                    }
                    else if (opcion == '2') {
                        cout << "¡Uy! Ha escapado. ¿Qué quieres hacer ahora?" << endl;
                        cout << "1. Comer" << endl;
                        cout << "2. Dormir" << endl;
                        opcion = getchar();
                        cin.ignore();

                        if (opcion == '1') {
                            cout << "Tu dueño se apresura a darte comida porque piensa que tienes hambre." << endl;
                            return 0;
                        }
                        else if (opcion == '2') {
                            cout << "Flojera. Terminamos por hoy." << endl;
                            return 0;
                        }
                    }
                }
                else if (opcion == '2') {
                    cout << "No hay nada en la sala." << endl;
                }
            }
        }
        else if (opcion == 'B' || opcion == 'C') {
            cout << "Nada interesante aquí." << endl;
        }
    }

    return 0;
}
