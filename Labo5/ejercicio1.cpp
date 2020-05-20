#include "iostream"

using namespace std;

int main()
{
    int a,b;

    cout << "Ingrese los numeros que quiere dividir entre si: ";
    cin >> a >> b;

    if (a % b == 0)
    {
        cout << a << " es divisible entre " << b;
    }else 
    cout << a << " no es divisible entre " << b;

}


