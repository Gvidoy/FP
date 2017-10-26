/*
Este programa lee desde el teclado un numero e imprime en pantalla
todos sus divisores, obliga al usuario a usar un entero positivo mediante
un buble do while.
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR
*/

#include <iostream>
using namespace std;

int main(){
   
	int tope = 0;
	int divisor = 1;
	
	do
	{
		cout << "\nIntroduzca un numero: ";
		cin >> tope;
	}
	while( tope <= 0 );
	
	while  (divisor <= tope) { 
	
		if (( tope % divisor ) == 0 )

			cout << " " << divisor <<" es divisor \n";
		   divisor++;
	}

   cout << "\n\n";
	system("pause");
}
