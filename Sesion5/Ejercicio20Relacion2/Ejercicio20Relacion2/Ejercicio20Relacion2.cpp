/*
Se ha reescrito los programas de los ejercicio 9 - 11 - 19 utilizando en este
caso bucle for en lugar de while.
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR
*/


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
//Apartado A
int main()
{
	int tope; 
	int divisor;

	do 
	{
		cout << "Introduce un numero entero positivo mayor que 0: ";
		cin >> tope;
		cout << endl;
	} 
	while (tope <= 0);

	for (divisor = 1; divisor < tope; divisor++)
		 
		if (( tope % divisor ) == 0 )
		cout << " " << divisor <<" es divisor \n";

*/

//Apartado B

int main()
{
   
	double capital;
	double interes;
	int año;
	int i;

	cout << "Introduzca la cantidad: " ;
	cin >> capital;
	cout << "Introduzca el Interés: " ;
	cin >> interes;
	cout << "Introduzca el numero de años: " ;
	cin >> año;

	for (i = 1; i<= año; i++)

		capital = capital + (capital * (interes / 100)) ;
	   cout << "\nTotal en el año número " << i << " = " << capital << "\n\n" ;


//Apartado C
/*
int main()
{
	double termino_primero, razon;
	int n, tope;

	double suma_total; // variable acumuladora

	cout.setf(ios::fixed);		// Notación de punto fijo para los reales
	cout.setf(ios::showpoint);	// Mostrar siempre decimales 

	cout << "Primer término de la progresión: ";
	cin >> termino_primero;
	cout << "Razón de la progresión: ";
	cin >> razon;

	do {
		cout << "Indice (debe ser >=1) del último término a sumar: ";
		cin >> tope;
	} while (tope < 1);

	suma_total = termino_primero;

	for (n = 2; n <= tope; n++)
	{
		suma_total = suma_total + (termino_primero * pow(razon, n-1));
	}

	cout << "\nSuma hasta " << setw(3) << tope 
		 << " = " << setw(10) << setprecision (2) << suma_total;
	cout << "\n\n";
	*/
   cout << "\n\n";
	system("pause");
}

