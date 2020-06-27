#include "iostream"

using namespace std;

float Leer_nota(float notasest[][5], int numest){ //funicon que pide las notas de los 5 examenes de cada estudiante
	for (int i = 0; i < numest; i++)
	{
		cout << "Estudiante " << i << endl;
		for (int n = 0; n <= 4; n++)
		{
			cout << "Ingrese la nota " << n << ": ";
			cin >> notasest[i][n];
		}
	}return notasest[numest][5];
}

float Calcular_nota(float notasest[][5], int numest, float notafinal[][5]){ //funcion que calcula los puntos obtenidos de cada examen
	for (int i = 0; i < numest; i++)
	{
		for (int n = 0; n <= 4; n++)
		{
			notafinal [i][n] = notasest[i][n] * 0.2;
		}
	}return notafinal[numest][5];
}

float Guardar_nota(float notasest[][5], int numest, float notafinal[][5], float notadesp[][1]){ //funcion que realiza la suma de los puntajes de los 5 examenes

	for (int i = 0; i < numest; i++)
	{
		for (int n = 0; n <= 0; n++)
		{
			notadesp[i][1] = notafinal[i][n] + notafinal[i][n+1] + notafinal[i][n+2] + notafinal[i][n+3] +notafinal[i][n+4];
			cout << "La nota del estudiante " << i << " es: ";
			cout << notadesp[i][1] << endl; //se despliega la sumatoria
		}
	}return notadesp[numest][1];
}

int main(void){
	int numest;

	cout << "Ingrese el numero de estudiantes a los que calculara su nota: ";
	cin >> numest;

	float notasest[numest][5]; //array que posee las notas de los examenes
	float notafinal[numest][5]; //array que posee los puntos obtenidos de cada examen
	float notadesp[numest][1]; //array que posee la nota final

	Leer_nota(notasest,numest);
	Calcular_nota(notasest,numest,notafinal);
	Guardar_nota(notasest,numest,notafinal,notadesp);
}