/*
Progresion geometrica con una clase
EJERCICIO 15 RELACION 3
GREGORIO VIDOY FAJARDO
CURSO 1
GRUPO A2
ETSIIT UGR
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class ProgresionGeometrica
{
private:

	double termino_primero;
	double razon;
	double tope;

public:

	//constructor
	ProgresionGeometrica(double n, double r, double final) 
	{
		termino_primero = n;
		razon = r;
		tope = final;
	}
	//**********************************************************************
	//En este metodo calculo la suma hasta infinito.
	double SumaHastaInfinito()
	{
		double suma_total;
		suma_total = termino_primero/(1-razon);
	
		return(suma_total);
	}

	//**********************************************************************
	//Este metodo lo utilizo para poder obtener la variable razon que esta
	//declarada como privada.
	
	double GetRazon()
	{
		return razon;
	}

	//**********************************************************************
	//Este metodo lo utilizo para poder obtener la variable Tope que esta
	//declarada como privada.

	double GetTope()
	{
		return tope;
	}
	//**********************************************************************
	//En este metodo calculo la suma de un numero con una determinada razon
	//hasta un tope
	double SumaHasta()
	{
		double suma_total;
		suma_total = termino_primero*(((pow(razon,tope))-1)/(razon-1));

		return(suma_total);
	}

	//**********************************************************************
	//En este metodo calculo la multiplicacion de un numero con una determinada razon
	//hasta un tope
	double MultiplicaHasta()
	{
		double suma_total;
		suma_total = sqrt(pow((termino_primero*tope),tope));
   
		return(suma_total);
	}
};

int main()
{
	double n;
	double r;
	double final;
	cout.setf(ios::fixed);		// Notación de punto fijo para los reales
	cout.setf(ios::showpoint);	// Mostrar siempre decimales 

	cout << "\nPrimer término de la progresión: ";
	cin >> n;
	cout << "\n\nRazón de la progresión: ";
	cin >> r;
	
	do 
	{
		cout << "\n\nIndice (debe ser >=1) del último término a sumar: ";
		cin >> final;
	} 
	while (final < 1);

	//Creo el objeto con los valores introducidos.
	ProgresionGeometrica objeto1(n,r,final);

	
	cout << "\n\n------------------------------------------------------\n\n";
	
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

	cout << "\n\n-------------------------->";
	cout << "\nEjecucion del metodo SumaHastaInfinito" 
		  << endl << endl;

	//Antes de ejecutar la funcion compruebo que el valor absoluto de la razon
	//es menor que 1
	if (abs(objeto1.GetRazon()) <1)
	{
		cout << "\nSuma hasta " << "Infinito: " << setw(10) << setprecision (2) 
			  <<  objeto1.SumaHastaInfinito();
	}
	else 
	{
		cout << "\nLa suma hasta infinito no se puede calcular para una "
			  << " razon con valor absoluto mayor que 1";
	}

	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	
	cout << "\n\n-------------------------->";
	cout << "\nEjecucion del metodo SumaHasta" 
		  << endl << endl;	
   
	cout << "\nLa suma hasta el numero tope " << setprecision (2) 
		  << objeto1.GetTope() << " es: " << setw(10) << setprecision (2)
		  << objeto1.SumaHasta();

	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	
	cout << "\n\n-------------------------->";
	cout << "\nEjecucion del metoro MultiplicaHasta"
        << endl << endl;

	cout << "\nLa multiplicacion hasta el numero tope " << setprecision (2) 
		  << objeto1.GetTope() << " es: " << setw(10) 
		  << setprecision (2) << objeto1.MultiplicaHasta();

	cout << "\n\n";
	system("pause");
}
