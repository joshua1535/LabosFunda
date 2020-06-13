#include "iostream"
#include "stdlib.h"
#include "time.h"
int Validacion(int,int,int);
using namespace std;


int main(void){
    int n, randNum, oportunidades = 1;      //funcion para obtener el numero al azar

    srand(time(NULL));

    randNum = 1+rand() % (101-1);
    

    cout << "EL NUMERO MAGICO" << endl << endl;
    cout << "Ingrese un numero entre el 1 y 100; tiene 5 intentos: (Crtl-z para parar el programa) ";
    while(cin >> n){    // funcion para poder parar el programa con Ctrl-z
        Validacion(n,randNum,oportunidades);
    }
}


int Validacion(int n, int randNum, int oportunidades){  //funcion donde se valida si el numero ingresado es correcto
    cout << endl;
    oportunidades = 0;
        while (oportunidades <=5)   //iteracion que permite realizar los 5 intentos
    {   oportunidades++;
        switch (oportunidades)  //switch para evaluar los cinco casos posibles
        {
        case 1:
            if(n > randNum){
                cout << "Intente con un valor menor (Le quedan 4 intentos) o Crtl-z para parar el programa: ";
                cin >> n;
                cout  << endl;  // se ralizan if's para saber si el numero es correcto, mayor o menor al que se intenta adivinar
                break;
            }else if(n < randNum){
                cout << "Intente con un valor mayor (Le quedan 4 intentos) o Crtl-z para parar el programa: ";
                cin >> n;
                cout  << endl;
                break;
            }else if(n == randNum && oportunidades == 1){
                cout << "Felicidades ha ganado el juego en el primer intento! :) (Crtl-z para parar el programa)";
                oportunidades = 6; // si el numero es correcto, se asigna un valor mayor a 5 para que el while se rompa y no imprima las lineas
                break;             // de codigo que siguen
            }
            break;
        
        case 2:
            if(n > randNum){
                cout << "Intente con un valor menor (Le quedan 3 intentos)o Crtl-z para parar el programa: ";
                cin >> n;
                cout << endl;
                break;
            }else if(n < randNum){
                cout << "Intente con un valor mayor (Le quedan 3 intentos) o Crtl-z para parar el programa: ";
                cin >> n;
                cout << endl;
                break;
            }else if(n == randNum && oportunidades == 2){
                cout << "Felicidades ha ganado el juego en el segundo intento! :) (Crtl-z para parar el programa)";
                oportunidades = 6;
                break;
            }else
            break;

        case 3:
            if(n > randNum){
                cout << "Intente con un valor menor (Le quedan 2 intentos) o Crtl-z para parar el programa: ";
                cin >> n;
                cout << endl;
                break;
            }else if(n < randNum){
                cout << "Intente con un valor mayor (Le quedan 2 intentos) o Crtl-z para parar el programa: ";
                cin >> n;
                cout << endl;
                break;
            }else if(n == randNum && oportunidades == 3){
                cout << "Felicidades ha ganado el juego en el tercer intentro! :) (Crtl-z para parar el programa)";
                oportunidades = 6;
                break;
            }else
            break;
        
        case 4:
            if(n > randNum){
                cout << "Intente con un valor menor (Le queda un intento) o Crtl-z para parar el programa: ";
                cin >> n;
                cout << endl;
                break;
            }else if(n < randNum){
                cout << "Intente con un valor mayor (Le queda un intento) o Crtl-z para parar el programa: ";
                cin >> n;
                cout << endl;
                break;
            }else if(n == randNum && oportunidades == 4){
                cout << "Felicidades ha ganado el juego en el cuarto intentro! :) (Crtl-z para parar el programa)";
                oportunidades = 6;
                break;
            }else
            break;
        
        case 5:
            if(n > randNum){
                cout << "Debio intentar con un numero menor (Debe digitar Crtl-z para parar el programa).";
                break;
            }else if(n < randNum){
                cout << "Debio intentar con un numero mayor (Debe digitar Crtl-z para parar el programa).";
                break;
            }else if(n == randNum && oportunidades == 5){
                cout << "Felicidades ha ganado el juego en el ultimo intento! :) (Crtl-z para parar el programa)";
                break;
            }else
            break;

        default:
            break;
        }
    }
}