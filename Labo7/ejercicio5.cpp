#include "iostream"
using namespace std;

int main(void){

    cout << "A continuacion se imprimiran los primeros 100 numeros impares de manera decreciente" << endl;
    int num = 199;
    int impar[num];

    for(int i=0; i<=num; i++){
        impar[i]= i;
    }

    for(int i=199; i >=1; i-=2){
        cout << impar[i] << "\t";
    }
}