/*
Este programa lee numeros reales desde el teclado compara el minimo de los
numeros reales introducidos y finaliza el programa cuando se introduce un
"0".
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR
*/

#include <iostream>
using namespace std;

int main(){
   
	double dato = 0;
	double valorMinimo = 0;

	do
	{
		cout << "Introduzca un numero: ";
		cin >> dato;
		
		if ( dato < valorMinimo  )
			valorMinimo = dato;

	}
	while ( dato != 0 );
	
	if ( valorMinimo == 0)
	{
	   cout << "\nEl programa a terminado";
		
	}
	else
	{
		cout << "\nEl valor minimo introducido es: " << valorMinimo;
	}
	cout << "\n\n";
	system("pause");
}
