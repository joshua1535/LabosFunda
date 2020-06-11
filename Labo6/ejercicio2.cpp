#include <ctime>
#include <iostream>

using namespace std;

int main() {
   
    time_t t = time(0);  
    tm* now = localtime(&t);
    cout << "La hora actual es: ";
    cout << (now->tm_hour) << ':'; 
    cout << (now->tm_min) << ':';
    cout <<  now->tm_sec << endl;

    cout << "Despues de un segundo es: ";
    cout << (now->tm_hour) << ':'; 
    cout << (now->tm_min) << ':';
    cout <<  now->tm_sec + 1;

         
}