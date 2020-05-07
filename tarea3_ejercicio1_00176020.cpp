#include "iostream"

using namespace std;

int main()
{
    float numero1;
    float numero2;
    float numero3;

    cout << "Ingrese los 3 numeros a promediar "; 
    cin >> numero1 >> numero2 >> numero3;

    float suma;
    suma = numero1 + numero2 + numero3;
    float div;
    div = suma / 3;
    float promedio = div;

cout << "El promedio de los numeros ingresados es: " << promedio;


}