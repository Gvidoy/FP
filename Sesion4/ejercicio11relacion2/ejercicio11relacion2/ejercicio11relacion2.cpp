/*
Este programa calcula el interes de un capital en un determinado numero de a�os
GREGORIO VIDOY FAJARDO 1 A2 UGR ETSIIT
*/
#include <iostream>
using namespace std;

int main()
{
   
	double capital;
	double interes;
	int a�o;
	int i = 1 ;
	
	cout << "Introduzca la cantidad: " ;
	cin >> capital;
	cout << "Introduzca el Inter�s: " ;
	cin >> interes;
	cout << "Introduzca el numero de a�os: " ;
	cin >> a�o;

	while ( i <= a�o)
	{
		capital = capital + (capital * (interes / 100)) ;
	   cout << "\nTotal en el a�o n�mero " << i << " = " << capital << "\n\n" ;
		i++;
	}

   cout << "\n\n";
	system("pause");
}
