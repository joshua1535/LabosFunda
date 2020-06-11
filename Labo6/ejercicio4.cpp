#include "iostream"
bool bisiesto(int,bool);
int diaDespues(int,int,int,bool);
using namespace std;

int main(void){
    int day, month, year;
    bool respuesta;

    cout << "Ingrese el dia: ";
    cin >> day;
    cout << "ingrese el mes: ";
    cin >> month;
    cout << "ingrese el año: ";
    cin >> year;

    diaDespues(day,month,year,respuesta);

}

int diaDespues(int day, int month, int year, bool respuesta){

    if(bisiesto(year,respuesta) == true){
        switch (month)
        {                                                       //Se realiza un if, para diferenciar si el año es bisiesto o no 
        case 1:                                                 //luego, se realiza un switch de cada mes, para evaluar si solo se 
            day += 1;                                           //sumara uno al dia o si se cambiara de mes, y en el caso de diciembre
            if(day > 31){                                       //si tambien se cambiara el año
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            
            break;
        
        case 2:
            day += 1;
            if(day > 29){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;
            
        case 3:
            day += 1;
            if(day > 31){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;

        case 4:
            day += 1;
            if(day > 30){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;

        case 5:
            day += 1;
            if(day > 31){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;

        case 6:
            day += 1;
            if(day > 30){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;

        case 7:
            day += 1;
            if(day > 31){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;
        
        case 8:
            day += 1;
            if(day > 31){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;
        
        case 9:
            day += 1;
            if(day > 30){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;
        
        case 10:
            day += 1;
            if(day > 31){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;

        case 11:
            day += 1;
            if(day > 30){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;
        
        case 12:
            day += 1;
            if(day > 31){
                year +=1;
                day = 1;
                month = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;

        default: cout << "No se han ingresado datos correctos.";
            break;
        }
    }else
    {
        switch (month)
        {
        case 1:
            day += 1;
            if(day > 31){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            
            break;
        
        case 2:
            day += 1;
            if(day > 28){
                month +=1;
                day = 1;
               cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;
            
        case 3:
            day += 1;
            if(day > 31){
                month +=1;
                day = 1;
               cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;

        case 4:
            day += 1;
            if(day > 30){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;

        case 5:
            day += 1;
            if(day > 31){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;

        case 6:
            day += 1;
            if(day > 30){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;

        case 7:
            day += 1;
            if(day > 31){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;
        
        case 8:
            day += 1;
            if(day > 31){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;
        
        case 9:
            day += 1;
            if(day > 30){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;
        
        case 10:
            day += 1;
            if(day > 31){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year; 
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;

        case 11:
            day += 1;
            if(day > 30){
                month +=1;
                day = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;
        
        case 12:
            day += 1;
            if(day > 31){
                year +=1;
                day = 1;
                month = 1;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }else
            {
                cout << "La fecha es: " << day << "/"<< month << "/"<< year;
            }
            break;

        default: cout << "No se han ingresado datos correctos.";
            break;
        }
    }
    
}




bool bisiesto(int year, bool respuesta){        //se realiza esta  funcion para comprobar si el año es bisiesto o no
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
     
    