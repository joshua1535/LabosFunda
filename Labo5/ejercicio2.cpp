#include "iostream"

using namespace std;

int main(void)
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if(num%2 == 0)
    {
        cout << num << " es un numero par";
    }else
    {
        cout << num << " es un numero impar";
    }
    
}