#include "iostream"
bool bisiesto(int, bool);
using namespace std;

int main(void){
    int year;
    bool respuesta;

    cout << "Ingrese el año a evaluar: ";
    cin >> year;
    
    if(bisiesto (year, respuesta) == true){
        cout << "El año ingresado es bisiesto.";
    }else 
    cout << "El año ingresado no es bisiesto.";
}


bool bisiesto(int year, bool respuesta){
     
    if(year % 400 == 0){
        respuesta = true;
        return respuesta;
    }else if(year % 4 == 0){
        if(year % 100 != 0){
            respuesta = true;
            return respuesta;
        }
    }else
    {
        respuesta = false;
        return respuesta;
    }
    
}