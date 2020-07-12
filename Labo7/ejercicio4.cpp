#include "iostream"
using namespace std;

int Leer_arreglo1(int arreglo1[],int n){ 

    for(int i = 0; i<n; i++){
        cout << "Ingrese el valor en la posicion " << i << " del arreglo 1: ";
        cin >> arreglo1[i];
    }return arreglo1[n];
}

// Se realizan las funciones que pediran los elementos que se sumaran 
int Leer_arreglo2(int arreglo2[],int n){

    for(int i = 0; i<n; i++){
        cout << "Ingrese el valor en la posicion " << i << " del arreglo 2: ";
        cin >> arreglo2[i];
    }return arreglo2[n];
}

int Suma_arreglos(int arreglo1[],int arreglo2[],int n, int arreglosum[]){ 

    for(int i =0; i<n; i++){ //se suman los elementos de ambos arrays y se almacena en un tercero
        arreglosum[i] = arreglo1[i] + arreglo2[i];
    } return arreglosum[n];
}

int Desplegar_array(int arreglosum[], int n){ //funcion que solamente imprime la suma ya realizada anteriormente

    cout << "La suma de los arreglos fue de: ";
    for (int i= 0; i<n; i++){
        cout << arreglosum[i] << "\t";
    }
}

int main(void){
    int n; //cantidad de elementos para ambos arrays

    cout << "Ingrese el numero de elementos que formaran los arreglos: ";
    cin >>n;

    int arreglo1[n];    // se declaran los arryas con la cantidad de elementos escogidos por el usuario
    int arreglo2[n];
    int arreglosum[n];

    Leer_arreglo1(arreglo1,n);
    cout << endl;
    Leer_arreglo2(arreglo2,n);
    Suma_arreglos(arreglo1,arreglo2,n,arreglosum);
    Desplegar_array(arreglosum,n);
}