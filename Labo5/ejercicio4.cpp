#include "iostream"
#include "cstring"

using namespace std;

int main()
{
    string palabra;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    if (palabra.length() >= 10)
    {
        cout << "La palabra posee mas de diez caracteres." << endl;
    }else 
        cout << "La palabra posee menos de diez caracteres." << endl;

    
    if(palabra.length()%2 == 0 )
    {
        cout << "La longitud de la palabra es par.";
    }else 
        cout << "La longitud de la palabra es impar.";

  
}