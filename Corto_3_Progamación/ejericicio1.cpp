#include "iostream"
int Numero_empleados(int,int,int,int,float,float,float,float,float);
int Sueldo(int,int,int,float,float,float,float,float);
using namespace std;

int main(void){
    int nemple, hrtrab, hrext, i;
    float salNet, salDev, isss, afp, renta;

    cout << "Ingrese el numero de empleados a los cuales quiere calcular sus sueldos: ";
    cin >> nemple;  

    Numero_empleados(nemple,i,hrtrab,hrext,salNet,salDev,isss,afp,renta);

}

int Numero_empleados(int nemple, int i, int hrtrab, int hrext, float salNet, float salDev, float isss, float afp, float renta){
    
    for(i = 1; i <= nemple; i++){     //iteracion condicionada por la cantidad de empleados, para pedir las horas e imprimirla por cada empleado
        cout << "Ingrese las horas de trabajo del empleado #" << i << " ";
        cin >> hrtrab;
        cout << "Ingrese las horas extra de trabajo del empleado #" << i << " ";
        cin >> hrext;

        Sueldo(i,hrtrab,hrext,salNet,salDev,isss,afp,renta);

    }
}
    //Esta es la funcion que se encarga de calcular el sueldo neto y devengado 
int Sueldo(int i, int hrtrab, int hrext, float salNet, float salDev, float isss, float afp, float renta){

    hrtrab *= 1.75;
    hrext *= 2.50;

    salNet = hrtrab + hrext;
    cout << "El salario neto del empleado #" << i << " es: $" << salNet << endl;

    isss = salNet * 0.04;
    afp = salNet *0.0625;


    if(salNet > 500.00){ // condicion para saber si se calcula la renta o no
        renta = salNet * 0.1;
        salDev = salNet - (isss + afp + renta);

        cout << "El salario devengado del empleado #" << i << " es: $" << salDev << endl;
    }else{
        salDev = salNet - (isss + afp);
        cout << "El salario devengado del empleado #" << i << " es: $" << salDev << endl;
    }


}