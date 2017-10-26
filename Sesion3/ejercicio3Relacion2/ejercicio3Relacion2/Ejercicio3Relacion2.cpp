/*
Este proigrama lee dos valores enteros desde el teclado y comprueba 
que son divisibles entre ellos si lo son devuelve que almenos uno
es divisible entre el otro de lo contrario indica que no son 
divisibles
GREGORIO VIDOY FAJARDO ETSIIT UGR 1 GRUPO A2
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() 
{
	int operador1 = 0;
	int operador2 = 0;

	cout << "\nIndrouzca un numero distinto a ( 0 ): " ;
	cin >> operador1;
	cout << "\nIndrouzca otro numero distinto a ( 0 ): " ;
	cin >> operador2;

	if ( ((operador1 % operador2) == 0) || ((operador2 % operador1) == 0) )
	{
		cout << "\n\nAlmenos un numero es divisible por el otro. \n\n";
	}	
	else
	{
		cout <<"\n\nNo son divisibles entre ellos\n\n";
		
	}

	system("pause");

	}