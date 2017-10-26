/*
Este programa calcula el valor n de la sucesion de fibonachi para una
aproximacion introducida por pantalla, la funcion Fibonachi calcula el
numero aure y la funcion ComparacionFibonachi calcula la sucesion de
Fibonachi y para cuando encuentra el minimo valor n para la aproximacion
introducida.
GREGORIO VIDOY FAJARDO 1 A2 UGR ETSIIT
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//En esta funcion calculo el numero FI
double Fibonachi()
{
double fibo;

fibo = ((1+(sqrt(5.0)))/2);

return (fibo);

}
//En esta funcion calculo la sucesion y el minimo valor n.
double ComparacionFibonachi(double aproximacion)
{
	double a_acumulador = 1;
	double b_acumulador = 1;
	double resultado = 0;
	double division_fibo = 0;
	double resta = 0;
	double aux = 0;
	double fibonachi = Fibonachi();

	resta = 2 - fibonachi;
	for (int i=1;resta > aproximacion; i++)
	{
		division_fibo = a_acumulador / b_acumulador;
		if ( division_fibo > fibonachi)
		{
			resta =  division_fibo - fibonachi ;
		}
		else
		{
			resta = fibonachi - division_fibo  ;
		}
		resultado= a_acumulador + b_acumulador;
		aux = b_acumulador;
		b_acumulador = a_acumulador;
		a_acumulador = resultado;
	}

return(aux);
}
int main()
{
	double calculo_fibonachi;
	double aproximacion = 0;
	double calculo_aproximacion = 0;
	
	cout << "Introduzca la aproximacion de fibonachi: ";
	cin >> aproximacion;

	calculo_fibonachi = Fibonachi();
	calculo_aproximacion = ComparacionFibonachi(aproximacion);
	
	cout << "\nNumero aureo: " << calculo_fibonachi << endl << endl;

	
	
	cout << "El menor valor para n que menos difiere de la sucesion de fibonachi es  : " << calculo_aproximacion;
   cout << "\n\n";
	system("pause");
}
