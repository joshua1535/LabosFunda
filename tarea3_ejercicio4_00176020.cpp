#include "iostream"

using namespace std;

int main()
{
    string producto;
     int cantidad;

    cout << "Ingrese el nombre del producto: " << endl;
    getline(cin,producto);

    float precio;
    cout << "Ingrese el precio unitario: " << endl;
    cin >> precio,

   
    cout << "Ingrese la cantidad adquirida: " << endl;
    cin >> cantidad;
    
    float total;
    total = (cantidad * precio); 
    cout << "El total de gasto fue de: " << "$" << total;
}