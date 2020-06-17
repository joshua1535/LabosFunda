#include "iostream"
#include "cmath"

using namespace std;

int main()
{
    float a;
    float b;
    int c;
    float result1;
    float result2;

    cout << "Ingrese el valor de a: " << endl;
    cin >> a;

    cout << "Ingrese el valor de b: " << endl;
    cin >> b;

    cout << "Ingrese el valor de c: " << endl;
    cin >> c;
    
    result1 = (((-b)+(sqrt(pow(b,2)-(4*a*c)))) / (2*a));
    result2 = (((-b)-(sqrt(pow(b,2)-(4*a*c)))) / (2*a));

    cout << "El resultado de X1 es: " << result1 << endl;
    cout << "El resultado de X2 es: " << result2 << endl;
}
