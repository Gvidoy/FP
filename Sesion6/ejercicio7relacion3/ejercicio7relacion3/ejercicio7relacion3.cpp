/*
Este ejercicio calcula el valor de la funcion gaussiana, se calcula de dos
dos maneras, 1 primera, la funcion GausianaUnParametro admite solo
un parametro el eje de abcisa y coje como constante local, desviaci�n
y experanza, y otra funcion Gausiana que admite por parametros,
abcisa, esperanza y desviaci�n, y utiliza pi como constante global.
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR
*/

#include <iostream>
using namespace std;

//Declaro la constante PI como global ya que las dos funciones la necesitan
//utilizar.
const double PI = 3.141592; 
//Declaro la variable y como global porque las 2 funciones la utilizan, para
// no repetir codigo.
double y;

double Gausiana(double esperanza,double desviacion,double x)
{
	y = exp (-0.5 * pow ((x - esperanza)/desviacion, 2)) / 
		(desviacion * sqrt(2*PI));

	return y;
}

double GausianaUnParametro(double x)
{
	// En esta funcion le doy como constante local esperanza y desviacio,
	//solo le paso como parametro abcisa.
	const double esperanza= 1;
	const double desviacion = 1;

	y = exp (-0.5 * pow ((x - esperanza)/desviacion, 2)) / 
		(desviacion * sqrt(2*PI));

	return y;
}
int main(){
   
	double esperan, desvia, x;
	double gaus;
	double gausSimple;
	
	cout << "\nIntroduzca el valor de la abscisa: ";
	cin >> x;
	
	gausSimple=GausianaUnParametro(x);

	cout << "\n\nEl valor de la funci�n gaussiana en " << x << " es " << gausSimple;

	cout << "\n\n\n----------------------------------------------------------------\n\n";

	cout << "\nIntroduzca el valor del par�metro 'esperanza' : ";
	cin >> esperan;
	cout << "\nIntroduzca el valor del par�metro 'desviacion' : ";
	cin >> desvia;
	cout << "\nIntroduzca el valor de la abscisa: ";
	cin >> x;

	gaus=Gausiana(esperan, desvia, x);

	cout << "\n\nEl valor de la funci�n gaussiana en " << x << " es " << gaus;
	
	cout << "\n\n\n";
	system("pause");
}
