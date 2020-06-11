#include "iostream"
int mcd(int, int, int);
using namespace std;

int main(void){
    int valor1, valor2, residuo;

    cout << "Ingrese el primer valor: ";
    cin >> valor1;
    cout << "Ingrese el segundo valor: ";
    cin >> valor2;

    cout << "El resultado del MCD es: " << mcd(valor1, valor2, residuo) << endl;
}


int mcd(int valor1, int valor2, int residuo){
    do{
residuo = valor1 % valor2;
if(residuo != 0){
valor1 = valor2;
valor2 = residuo;}
}
while(residuo != 0);
return valor2;
}




