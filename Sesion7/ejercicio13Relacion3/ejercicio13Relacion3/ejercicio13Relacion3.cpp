/*
Se crea la clase terna_vs1 y en ella dos metodos
el metodo Min que calcula el minimo de los 3 datos introducidos.
el metodo Media que calcula la media de los  valores.
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR
*/


#include <iostream>
using namespace std;

//En esta clase es todo publico y puedo acceder desde cualquier sitio
//a los datos

class Terna_vs1
{
public:
	double uno;
	double dos;
	double tres;
	double media;

	//Con este metodo calculo el minimo de los datos
	double Min()
	{
	double aux;
		if ( uno > dos)
		{
			aux=dos;
		}
		else
		{
			aux=uno;
		}
		if ( tres < aux )
		{
			aux=tres;
		}
	return aux;
	}

	//Con este metodo calculo la media de los datos
	double Media()
	{
		double media = uno + dos + tres;
		media = media / 3;

		return media;
	}
};




int main()
{
 
	Terna_vs1 primerobjeto; // Objeto para la clase Terna_vs1
	Terna_vs1 segundoobjeto; // Objeto para la clase Terna_vs1
	//Apartado a,b,c,d
	
	cout << "\nCalcular el mayor de los 3 numero introducidos para el primer objeto" << endl << endl;
	cout << "\nIntroduzca el primer valos: ";
	cin >> primerobjeto.uno;
	cout << "\nIntroduzca el segundo valos: ";
	cin >> primerobjeto.dos;
	cout << "\nIntroduzca el tercer valos: ";
	cin >> primerobjeto.tres;

	cout << "\n\nCalcular la media de los valores introducidos para el segundo objeto" << endl << endl;
	cout << "\nIntroduzca el primer valos: ";
	cin >> segundoobjeto.uno;
	cout << "\nIntroduzca el segundo valos: ";
	cin >> segundoobjeto.dos;
	cout << "\nIntroduzca el tercer valos: ";
	cin >> segundoobjeto.tres;
	cout << "\n\n---------------------------------------------------------------------\n";
	cout << "\n\nEl minimo de los datos del primer objeto es: " << primerobjeto.Min() << endl;
   cout << "\nLa media de los datos del segundo objeto introducido es: " << segundoobjeto.Media();
	

	cout << "\n\n";
	system("pause");
}
