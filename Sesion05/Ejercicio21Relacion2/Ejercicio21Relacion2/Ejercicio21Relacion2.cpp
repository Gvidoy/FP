/*
Calcula los 100 primeros terminos de la sucesion dada en el ejercicio
GREGORIO VIDOY FAJARDO 1 2A ETSIIT UGR
*/


#include <iostream>
#include <cmath>
using namespace std;

int main(){
   double n;
	double factor;
	double total;
	int i;
	n = 100;
	total= 0;
	
	//Apartado A
	
	for ( i = 1; i <= n; i++)
	{
		factor = 1;
		for ( int j=1 ; j <= i; j++)
		{
			factor=factor * (-1) ;
		}
		total = (factor*((i*i)-1))/(2.0 *i);
		cout << "\nEl resultado de operacion para i= " << i <<  " es: " << total;	 
	}
	/*
	
	//Apartado B inicializar factor -1
	factor = 1;
	for ( i = 1; i <= n; i++)
	{
		factor = factor*(-1); // Primero calculo el exponente.
		total = (factor*((i*i)-1))/(2.0 *i);
		cout << "\nEl resultado de operacion para i= " << i <<  " es: " << total;
	}

	*/

	

   cout << "\n\n";
	system("pause");
}
