/*
Este programa se pide un capital, un numero de años y un interes, el programa
calcula el interes obtenido para cada año ademas de el capital en desde
1 hasta llegar al interes intruducido.
GREGORIO VIDOY FAJARDO 1 2A ETSIIT UGR
*/
#include <iostream>
using namespace std;

int main ()
{
	int interes ;       
	double capital;          
	int anos;         

	cout << "\nIntroduzca un capital en euros: ";
	cin >> capital;
	cout << "\nIntroduzca un interes en tanto por ciento (%): ";
	cin >> interes;
	cout << "\nIntroduzca un numero de anios: ";
	cin >> anos;
	cout << "\n\n";

	
		for (int i=1; i <= interes; i++){
			cout << endl << "Calculo del interes " << i << "%" << endl << endl;
			for (int j=1; j <= anos ; j++)
			{
				capital = capital + capital * (i / 100.0);
				cout << "    Dinero obtenido en el año numero " << j << " = " 
					  << capital << endl;
	
		}
		
	}
   cout << "\n\n";
	system ("pause");

}