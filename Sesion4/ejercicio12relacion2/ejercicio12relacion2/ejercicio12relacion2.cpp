/*
Este programa calcula cuantos a�os tienen que pasar para que se doble
como minimo el capital inicial.
GREGORIO VIDOY FAJARDO 1 A2 UGR ETSIIT
*/
#include <iostream>
using namespace std;

int main()
{
	double capital;
	double interes;
	double total;
	int i = 1 ;
	
	cout << "Introduzca la cantidad: " ;
	cin >> capital;
	cout << "Introduzca el Inter�s: " ;
	cin >> interes;
	total = 2 * capital;

	while( capital <= total){
	
		capital = capital + (capital * (interes / 100)) ;
		i++;
	}

	cout << "\nTotal de a�os es " << i << " = " << capital << "\n\n" ;
   cout << "\n\n";
	system("pause");
}
