#include "iostream"

using namespace std;

int main()
{
    string producto;
     int cantidad;

    cout << "Ingrese el nombre del producto: " << endl;
    getline(cin,producto); /*Se utiliza el getline para que se pueda almacenar mas de una palabra, 
                            junto con espacios en la variable producto sin que c++ las tome como 
                            variables independientes una palabra de la otra*/

    float precio;
    cout << "Ingrese el precio unitario: " << endl;
    cin >> precio,

   
    cout << "Ingrese la cantidad adquirida: " << endl;
    cin >> cantidad;
    
    float total;
    total = (cantidad * precio); 
    cout << "El total de gasto fue de: " << "$" << total;
}