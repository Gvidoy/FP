/*
Este programa calcula la suma para los terminos de una sucesion,
En la parte A se utiliza una unica funcion para calcularlo
En la parte B se utiliza una funcion independiente para calcular el termino
de la sucesion y otra para calcular la sucesion.
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR
*/

#include <iostream>
#include <cmath>
using namespace std;

//Parte A
//Esta funcion calcula el valor de la sucesion.
double Sumatoria(int tope)
{     
	int i, potencia;
	double suma_serie, termino;   
   
	suma_serie = 0;

	potencia = 1; 
   
	for (i = 1 ; i <= tope ; i++){

		potencia = -potencia;	// cambio de signo ->
		                        // para i=1, (-1)^i debe ser -1,  
								      // para i=2, (-1)^i debe ser +1,... 
		termino = (i*i - 1) / (2.0 * i); // término i

		suma_serie = suma_serie + (potencia * termino);
	}

	
	 return suma_serie;
}
//Funviones para la parte B calculo del termino es una funcion aparte.
//Funcion para el calculo del termino.
double Iesima(int i){
	
	double termino;

		termino = ( i * i - 1) / (2.0 * i);

	return termino;
}
//Calcula la sucesion y el termino aparte.
double Sumatoria2(int tope)
{    

	   double suma_serie, termino;
		int i, iesima, potencia;

		potencia = 1;
		suma_serie = 0 ;

		for (i = 1 ; i <= tope ; i++){
		potencia = -potencia;      
		termino = Iesima(i);    
		                          
		suma_serie = suma_serie + (potencia * termino);
		}
	 return suma_serie;
}

int main ()
{
	int numero = 0;
	double sum1;
	double sum2;

	cout << "Valor para la suma de la sucesion apartado A" << endl << endl;
	cout << "Introduzca el numero de elementos que desea: ";
	cin >> numero;
   sum1=Sumatoria(numero);
	cout << endl << sum1 << endl << endl ;

	cout << "Valor para la suma de la sucesion apartado B" << endl << endl;
	cout << "Introduzca el numero de elementos que desea: ";
	cin >> numero;
   sum2=Sumatoria2(numero);
	cout << endl << sum2 << endl << endl ;
	system ("pause");
}
