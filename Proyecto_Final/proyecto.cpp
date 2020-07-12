#include "iostream"

using namespace std;

const int longCad = 20;

struct costoPorArticulo{
char nombreArticul[longCad+1];
int cantidad;
float precio;
float costoPorArticulo;};

void DatosProd(costoPorArticulo *prod, int n) //funcion que pide los nombres, cantidades y precios unitarios de los productos y los
{   cout << "Para ingresar articlos con mas de una palabra, por favor, hacer uso de '_' en lugar del espacio, gracias." << endl << endl; //almacena en el arreglo que esta en el puntero *prod de la estructura

    for (int i = 0; i < n; i++)
    {
    cout << "Ingresa el nombre del producto " << i+1 << ": ";
    cin >> prod[i].nombreArticul;
    cout << "Ingrese la cantidad comprada del producto " << i+1 << ": ";
    cin >> prod[i].cantidad;
    cout << "Ingrese el precio unitario del producto " << i+1 << ": $";
    cin >> prod[i].precio;
    cout << endl;
    }  
}

float CostPorArt(costoPorArticulo *prod,int n){ //funcion que calcula la cantidad total de cada producto por separado

    for (int i=0; i < n; i++)
    {
        prod[i].costoPorArticulo = prod[i].cantidad * prod[i].precio;
    }
}

void Factura(costoPorArticulo *prod, int n) { //funcion que despliega el nombre del producto, la cantidad, precio unitario y costo total (por articulo)

    for (int i = 0; i < n; i++)
    {
        cout << endl << "Producto: " << prod[i].nombreArticul << endl;
        cout << "Cantidad comprada: " << prod[i].cantidad << endl;
        cout << "Precio unitario: $" << prod[i].precio << endl;
        cout << "Costo total del producto: $" << prod[i].costoPorArticulo << endl;
    }
}

float CostoTotal(costoPorArticulo *prod, int n) {//funcion que suma los costos totales por articulo para obtener el costo final
    float total_de_compra = 0.0;

    for (int i = 0; i < n; i++)
    {
        total_de_compra += prod[i].costoPorArticulo;
    }
    return total_de_compra;
}

int main (){

    int n;
    cout << "Ingresa el numero de articulos a facturar: ";
    cin >> n;   //variable que representa la cantidad de articulos a facturar

    costoPorArticulo *producto = new costoPorArticulo[n]; //se declara un nuevo espacio de memoria para la estructura costoPorArticulo
    DatosProd(producto,n);                               //que sera un arreglo que contenga la cantidad de espacios igual al numero de articulos 
    CostPorArt(producto,n);
    Factura(producto,n);

    cout << endl << "El costo total de la compra fue de: $" << CostoTotal(producto,n);
}