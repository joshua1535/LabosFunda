#include "iostream"
#include "cstring"

using namespace std;

int main()
{
    string palabra;
    char cara;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    for(int i = 0; i<palabra.length();++i) // se realiza la iteracion para almacenar la ultima letra de la palabra.
    {
        cara = palabra.at(i);
    }

    if(palabra.at(0) == cara) //Se realiza la comparacion de la primera y ultima letra.
    {
        cout << "La palabra empieza y termina con la misma letra.";
    }else 
        cout << "La palabra empieza y termina con diferentes letras.";
}