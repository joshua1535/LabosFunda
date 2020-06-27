#include "iostream"
#include "string"

using namespace std;

string codificarcadena(string cad)
{
string codificar;
int recorrido = cad.length();
for (int i = 0; i < recorrido; i++) //iteracion que recorre cada caracter de la frase
{
	string letra;
	char leercadena = cad.at(i);
	letra = leercadena;

	switch (leercadena) // para evaluar si el caracter va a ser codificado o no
	{
		case 'm':
		  letra = "0";
		  break;
		case 'u':
		  letra = "1";
		  break;
		case 'r':
		  letra = "2";
		  break;
		case 'c':
		  letra = "3";
		  break;
		case 'i':
		  letra = "4";
		  break;
		case 'e':
		  letra = "5";
		  break;
		case 'l':
		  letra = "6";
		  break;
		case 'a':
		  letra = "7";
		   break;
		case 'g':
		  letra = "8";
		  break;
		case 'o':
		  letra = "9";
		  break;
		default:
		  break;
	}
	codificar = codificar.append(letra);
}
 return codificar;
}


int main()
{
	string cadedena;
	cout << "Ingrese el texto a codificar en clave Murcielago: ";
	getline(cin, cadedena); //funcion para que puedan agregarse espacios a la frase 
	cout <<"El texto codificado es: " << codificarcadena(cadedena) << endl;
}
