/*
El programa realiza operaciones con diferentes tipos de clases
EJERCICIO 13 RELACION 3
GREGORIO VIDOY FAJARDO
CURSO 1
GRUPO A2
ETSIIT UGR
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

//Declaro las variables como privadas y para acceder desde fuera tengo
//que utilizar metodos
class Terna_vs2
{
public:
	//constructor
	Terna_vs2(double primero,double segundo,double tercero)
	{
		uno = primero;
		dos = segundo;
		tres= tercero;
	}
	double GetPrimero()
	{
		uno;
	return uno;
	}
	double GetSegundo()
	{
		dos;
	return dos;
	}
	double GetTercero()
	{
		tres;
	return tres;
	}
private:
	double uno;
	double dos;
	double tres;
};

class Terna_vs3
{
public:
	//constructor
	Terna_vs3(double primero,double segundo,double tercero)
	{
		//asigno los 3 valores primeros dentro del constructor
		uno = 1;
		dos = 2;
		tres= 3;
	}
	double GetPrimero() //Muestro el valor de la variable privada uno
	{
		uno;
	return uno;
	}
	double GetSegundo() //Muestro el valor de la variable privada dos
	{
		dos;
	return dos;
	}
	double GetTercero() //Muestro el valor de la variable privada tres
	{
		tres;
	return tres;
	}
	//Modifico el valor de las tres variables privadas
	void SetValores(double primero, double segundo, double tercero)
	{
		uno = primero;
		dos = segundo;
		tres = tercero;
	}
private:
	// Variables privada solo accesible desde la clase
	double uno;
	double dos;
	double tres;
};

class Terna_vs4
{
public:
	//constructor
	Terna_vs4(double primero,double segundo,double tercero)
	{
		//asigno los 3 valores primeros dentro del constructor
		uno = 1;
		dos = 2;
		tres= 3;
		//Llamo a los metodos privados desde el constructor
		//y estos modifican el valor de las variables privadas
		SetPrimero(primero);
		SetSegundo(segundo);
		SetTercero(tercero);
	}
	double GetPrimero() //Muestro el valor de la variable privada uno
	{
		uno;
	return uno;
	}
	double GetSegundo() //Muestro el valor de la variable privada dos
	{
		dos;
	return dos;
	}
	double GetTercero() //Muestro el valor de la variable privada tres
	{
		tres;
	return tres;
	}
	
private:
	// Variables privada solo accesible desde la clase
	double uno; 
	double dos;
	double tres;

	void SetPrimero(double primero) //Modifico el valor de la variable privada uno
	{
		uno = primero;
	}
	void SetSegundo(double segundo) //Modifico el valor de la variable privada dos
	{
		dos = segundo;
	}
	void SetTercero(double tercero) //Modifico el valor de la variable privada tres
	{
		tres = tercero;
	}
	//Modifico el valor de las tres variables privadas
	void SetValores(double primero, double segundo, double tercero)
	{
		uno = primero;
		dos = segundo;
		tres = tercero;
	}

};
int main()
{
 
	Terna_vs1 primerobjeto; // Objeto para la clase Terna_vs1
	Terna_vs1 segundoobjeto; // Objeto para la clase Terna_vs1
	Terna_vs2 tercerobjeto(1,2,3);// Objeto para la clase Terna_vs2
	Terna_vs3 cuartoobjeto(0,0,0); // Objeto para la clase Terna_vs3
	Terna_vs4 quintoobjeto(10,9,8); // Objeto para la clase Terna_vs4
	//Apartado a,b,c,d
	/*
	cout << "\nCalcular el mayor de los 3 numero introducidos para el primer objeto" 
	     << endl << endl;
	cout << "\nIntroduzca el primer valos: ";
	cin >> primerobjeto.uno;
	cout << "\nIntroduzca el segundo valos: ";
	cin >> primerobjeto.dos;
	cout << "\nIntroduzca el tercer valos: ";
	cin >> primerobjeto.tres;

	cout << "\n\nCalcular la media de los valores introducidos para el segundo objeto" 
	     << endl << endl;
	cout << "\nIntroduzca el primer valos: ";
	cin >> segundoobjeto.uno;
	cout << "\nIntroduzca el segundo valos: ";
	cin >> segundoobjeto.dos;
	cout << "\nIntroduzca el tercer valos: ";
	cin >> segundoobjeto.tres;
	cout << "\n\n--------------------------------------------------------------\n";
	cout << "\n\nEl minimo de los datos del primer objeto es: " << primerobjeto.Min() 
	     << endl;
   cout << "\nLa media de los datos del segundo objeto introducido es: " 
	     << segundoobjeto.Media();
	*/

	//Apartado e
	//Llamada a las funciones que me muestran los datos
	//privados de la clase Terna_vs2
	
	cout << tercerobjeto.GetPrimero() << endl;
	cout << tercerobjeto.GetSegundo() << endl;
	cout << tercerobjeto.GetTercero() << endl;
	

	//Llamadas a los metodos de la funcion Terna_v3
	
	cout << cuartoobjeto.GetPrimero() << endl;
	cout << cuartoobjeto.GetSegundo() << endl;
	cout << cuartoobjeto.GetTercero() << endl << endl;
	cuartoobjeto.SetValores(10,9,8);
	cout << cuartoobjeto.GetPrimero() << endl;
	cout << cuartoobjeto.GetSegundo() << endl;
	cout << cuartoobjeto.GetTercero() << endl << endl;
	


	//Llamadas a los metodos de la funcion Terna_v4
	
	cout << quintoobjeto.GetPrimero() << endl;
	cout << quintoobjeto.GetSegundo() << endl;
	cout << quintoobjeto.GetTercero() << endl << endl;

	cout << "\n\n";
	system("pause");
}
