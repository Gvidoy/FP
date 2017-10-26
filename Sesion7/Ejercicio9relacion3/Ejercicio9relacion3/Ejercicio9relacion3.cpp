/*
En este programa se realizan funciones relacionadas con la 
progresion geometrica.
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Funcion para el apartado A.

double SumaHasta(double a_1, double r, int k)
{
	double suma_total_apartado_a; //Variable acumuladora.
	double termino_n;
	
	termino_n = a_1;
	suma_total_apartado_a = termino_n;

	for (int n=2; n <= k; n++) { 
		termino_n = termino_n * r;
		suma_total_apartado_a = suma_total_apartado_a +  termino_n;		
	}

	return (suma_total_apartado_a);

}

//Funcion para el apartado B

double SumaHastaApartadoB(double a_1, double r, int k)
{
	double suma_total_apartado_b;
	suma_total_apartado_b = a_1*(((pow(r,k))-1)/(r-1));

	return(suma_total_apartado_b);
}

//Funcion para el apartado c

double SumaHastaInfinito(double a_1, double r)
{
	double suma_total_apartado_c;
	suma_total_apartado_c = a_1/(1-r);
	
	return(suma_total_apartado_c);
}

//Funcion para el apartado d

double MultiplicaHasta(double a_1, int k)
{
	double suma_total_apartado_d;
	suma_total_apartado_d = sqrt(pow((a_1*k),k));
   
	return(suma_total_apartado_d);
}

int main()
{
	double termino_primero;
	double razon;
	int tope;
	double apartadoA;
	double apartadoB;
	double apartadoC;
	double apartadod;

	cout.setf(ios::fixed);		// Notaci�n de punto fijo para los reales
	cout.setf(ios::showpoint);	// Mostrar siempre decimales 
   
	cout << "Primer t�rmino de la progresi�n: ";
	cin >> termino_primero;
	cout << "Raz�n de la progresi�n: ";
	cin >> razon;

	do 
	{
		cout << "Indice (debe ser >=1) del �ltimo t�rmino a sumar: ";
		cin >> tope;
	} 
	while (tope < 1);
	
	apartadoA = SumaHasta(termino_primero,razon,tope);
	apartadoB = SumaHastaApartadoB(termino_primero,razon,tope);
	apartadoC = SumaHastaInfinito(termino_primero,razon);
	apartadod = MultiplicaHasta(termino_primero,tope);

	cout << "\n\n--------------------------------------------------\n";
	cout << "\n\nApartado A Funcion progresi�n geometrica" << endl << endl;
	cout << "\nSuma hasta " << setw(3) << tope 
	  	  << " = " << setw(10) << setprecision (2) << apartadoA;

	cout << "\n\nApartado B Funcion progresi�n geometrica sin bucle" << endl << endl;
	cout << "\nSuma hasta " << setw(3) << tope 
		  << " = " << setw(10) << setprecision (2) << apartadoB;
	
	cout << "\n\nApartado C Funcion progresi�n geometrica hasta infinito" << endl << endl;
	cout << "\nSuma hasta " << setw(3) << "Infinito " 
		  << " = " << setw(10) << setprecision (2) << apartadoC;

	cout << "\n\nApartado D Funcion progresi�n geometrica para multiplicar los k primeros elementos" << endl << endl;
	cout << "\nMultiplica hasta " << setw(3) << tope 
		  << " = " << setw(10) << setprecision (2) << apartadod;

	cout << "\n\n";
	system("pause");
}
