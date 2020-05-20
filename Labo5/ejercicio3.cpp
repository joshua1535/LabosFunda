#include "iostream"

using namespace std;

int main()
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if(num > 0)
    {
        cout << num << " es positivo";
    }else if(num < 0)
    {
        cout << num << " es negativo";
    }else 
    cout << num << " es cero";

}
