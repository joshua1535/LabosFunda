#include "iostream"

using namespace std;

float Medidas(float estaturas[]){ //funcion que pide las estaturas y las almacena en el array
     for(int i = 0; i<=24; i++){
         cout << "Ingrese el valor de la estatura del estudiante " << i << " : ";
         cin >> estaturas[i];
        }
}

float Media(float estaturas[], float media){ //funcion que calcula la media y determina los valores mayores, menores e iguales a la media
    float suma = 0.00;
    int mayor=0,menor=0,igual=0;

    for(int i = 0; i <= 25; i++){
        suma = suma + estaturas[i];
    }
    media = suma / 25.00;

    cout << "La media de las estaturas es de: " << media << endl;

    for(int n = 0; n <=24; n++){
        if(estaturas[n] > media){
            mayor += 1;
        }else if(estaturas[n] < media){
            menor += 1;
        }else if(estaturas[n] == media){
            igual += 1;
        }
    }
    cout << "La cantidad de estaturas mayores que la media es de: " << mayor << endl;
    cout << "La cantidad de estaturas menores que la media es de: " << menor << endl;
    cout << "La cantidad de estaturas iguales que la media es de: " << igual << endl;
}

int main(void){
    float estaturas [25], media;

    Medidas(estaturas);
    Media(estaturas,media);
}