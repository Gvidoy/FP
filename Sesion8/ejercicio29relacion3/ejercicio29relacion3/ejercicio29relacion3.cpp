/*
Modificacion del ejercicio de la gaussiana empleando metodos de una clase
Gaussiana con clases
EJERCICIO 29 RELACION 3
GREGORIO VIDOY FAJARDO
CURSO 1
GRUPO A2
ETSIIT UGR
*/

#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

class Gaussiana
{
   private:
		double esperanza;
		double desviacion;
		double x;
		double PI;

   public:
		//Constructor
		Gaussiana(double esperan, double desvia, double n)
		{
			esperanza = esperan;
			desviacion = desvia;
			x = n; 
			PI = 3.141592;
		}
		

//*************************************************************************
		//Este metodo calcula la Gaussicana con los parametros introducidos
		double GausianaConParametros()
		{
			double y = 0;
			y = exp (-0.5 * pow ((x - esperanza)/desviacion, 2)) / 
			(desviacion * sqrt(2*PI));
			return y;
		}

//**************************************************************************
		// En este metodo le doy como constante esperanza y desviacio,
	   //solo le paso como parametro abcisa.
		double GausianaUnParametro()
		{
			const double esperanza= 1;
			const double desviacion = 1;
			double y = 0;
			y = exp (-0.5 * pow ((x - esperanza)/desviacion, 2)) / 
			(desviacion * sqrt(2*PI));
			return y;
		}

//*************************************************************************
		//Este metodo muestra el parametro x que es privado
		double GetX()
		{
			return x;
		}



};



int main()
{
   double esperan, desvia, x;

	cout << "\nIntroduzca el valor del parámetro 'esperanza' : ";
	cin >> esperan;
	cout << "\nIntroduzca el valor del parámetro 'desviacion' : ";
	cin >> desvia;
	cout << "\nIntroduzca el valor de la abscisa: ";
	cin >> x;
	cout << "\n\n\n-----------------------------------------------------------"
		  << "-----\n\n\n";

	//Creo el objeto de la clase y le paso los parametro
	Gaussiana objeto1(esperan,desvia,x);
	
	cout << "\n--------------------->\n\n";
	cout << "Ejecucion del metodo GausianaUnParametro\n\n";
	cout << "El valor de la función gaussiana en " << objeto1.GetX() << " es " 
		  << objeto1.GausianaUnParametro();
	cout << "\n\n\n--------------------->\n\n";
	cout << "Ejecucion del metodo GausianaConParametros\n\n";
	cout << "El valor de la función gaussiana en " << objeto1.GetX() << " es " 
		  << objeto1.GausianaConParametros() << endl << endl;

	system("pause");
}
