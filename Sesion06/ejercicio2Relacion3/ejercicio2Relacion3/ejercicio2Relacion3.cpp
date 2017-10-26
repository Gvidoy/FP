/*
Este programa calcula en la funcion Max el mayor de los 3 numero introducidos.
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR
*/

#include <iostream>
using namespace std;

double Max(double primero, double segundo, double tercero)
{
	double aux;
		if ( primero > segundo)
		{
			aux=primero;
		}
		else
		{
			aux=segundo;
		}
		if ( tercero > aux )
		{
			aux=tercero;
		}
   return aux;
}
int main()
{
   double n1 = 0;
	double n2 = 0; 
	double n3 = 0;
	double resultado = 0;

	cout << "\nIntroduzca el primer numero: ";
	cin >> n1;
	cout << "\nIntroduzca el segundo numero: ";
	cin >> n2;
	cout << "\nIntroduzca el tercer numero: ";
	cin >> n3;

	resultado = Max(n1,n2,n3);

	cout << "\nEl mayor de los tres numeros introducidos es: " << resultado;
	
	cout << "\n\n";
	system("pause");
}
