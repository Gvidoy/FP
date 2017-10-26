/*
Este problema en la solucion A lee desde el teclado un numero e imprime en 
pantalla todos sus divisores, obliga al usuario a usar un entero positivo 
medianteun buble do while.
Este programa en la solucion B calcula el interes de un capital en un 
determinado numero de años
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR
*/

#include <iostream>
using namespace std;

int main(){

	double capital;
	double interes;
	int año = 0;
	int i = 0;
   int tope = 0;
	int divisor = 0;

/*
//Ejercicio 9 relacion 2
do
{
	cout << "\nIntroduzca un numero: ";
	cin >> tope;
}
while( tope < 0 );
	
while  (divisor <= tope) { 
	
	if (( tope % divisor ) == 0 )

cout << divisor << " es divisor de " << tope << endl;
divisor++;
	}

*/

	

//Ejercicio17 parte A
	while ( (divisor <= tope) || (tope <= 0) )
	{ 
		if (tope <= 0) 
		{
			cout << "\nIntroduzca un numero: ";
			cin >> tope;
		}
		else
		{
			++divisor;	
			if(( tope % divisor ) == 0 )
				cout << divisor << " es divisor de " << tope << endl;
		}
			
	}

/*
ejercicio 11 relacion 2
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


	*/

	//EJERCICIO 17 PARTE B
	/*
	cout << "Introduzca la cantidad: " ;
	cin >> capital;
	cout << "Introduzca el Interés: " ;
	cin >> interes;
	
	do
	{
		cout << "Introduzca el numero de años mayor que (0): " ;
		cin >> año;
	}
	
	while ( año <= 0);
	
	while ( i < año )
	{
		capital = capital + (capital * (interes / 100)) ;
		i++;
		cout << "\nTotal en el año número " << i << " = " << capital << "\n\n" ;
	}
	*/
   cout << "\n\n";
	system("pause");
}
