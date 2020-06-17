#include "iostream"
#include "cmath"

using namespace std;

int main()
{
    float area;
    float perimetro;
    float diametro;
    float radio;

    cout << "Ingrese el valor del diametro ";
    cin >> diametro;

    radio = diametro / 2;
    area = (3.1416 * pow(radio,2));
    perimetro = (2 * 3.1416 * radio);

    cout << "El valor del area es: " << area << endl;
    cout << "El valor del perimetro es: " << perimetro << endl;
    

}