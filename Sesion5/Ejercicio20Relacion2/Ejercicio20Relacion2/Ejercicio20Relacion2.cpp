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
	int a�o;
	int i;

	cout << "Introduzca la cantidad: " ;
	cin >> capital;
	cout << "Introduzca el Inter�s: " ;
	cin >> interes;
	cout << "Introduzca el numero de a�os: " ;
	cin >> a�o;

	for (i = 1; i<= a�o; i++)

		capital = capital + (capital * (interes / 100)) ;
	   cout << "\nTotal en el a�o n�mero " << i << " = " << capital << "\n\n" ;


//Apartado C
/*
int main()
{
	double termino_primero, razon;
	int n, tope;

	double suma_total; // variable acumuladora

	cout.setf(ios::fixed);		// Notaci�n de punto fijo para los reales
	cout.setf(ios::showpoint);	// Mostrar siempre decimales 

	cout << "Primer t�rmino de la progresi�n: ";
	cin >> termino_primero;
	cout << "Raz�n de la progresi�n: ";
	cin >> razon;

	do {
		cout << "Indice (debe ser >=1) del �ltimo t�rmino a sumar: ";
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

