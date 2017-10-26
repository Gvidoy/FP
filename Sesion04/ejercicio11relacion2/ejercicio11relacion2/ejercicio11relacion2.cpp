/*
Este programa calcula el interes de un capital en un determinado numero de años
GREGORIO VIDOY FAJARDO 1 A2 UGR ETSIIT
*/
#include <iostream>
using namespace std;

int main()
{
   
	double capital;
	double interes;
	int año;
	int i = 1 ;
	
	cout << "Introduzca la cantidad: " ;
	cin >> capital;
	cout << "Introduzca el Interés: " ;
	cin >> interes;
	cout << "Introduzca el numero de años: " ;
	cin >> año;

	while ( i <= año)
	{
		capital = capital + (capital * (interes / 100)) ;
	   cout << "\nTotal en el año número " << i << " = " << capital << "\n\n" ;
		i++;
	}

   cout << "\n\n";
	system("pause");
}
