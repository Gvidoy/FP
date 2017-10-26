/*
El programa recibe una pareja de enteros y mediante unos metodos de una
clase realiza una serie de operaciones con ellos permitiendo escojer la
opcion con un menu.
Pareja de enteros
EJERCICIO 17 RELACION 3
GREGORIO VIDOY FAJARDO
CURSO 1
GRUPO A2
ETSIIT UGR
*/

#include <iostream>
using namespace std;

class ParejaEnteros
{
private:
		int entero1;
		int entero2;

public:
		//Constructor
		ParejaEnteros(int ent1, int ent2)
		{
			entero1 = ent1;
			entero2 = ent2;
		}

//***************************************************************************
//Este metodo muestra el dato entero1
		double GetEntero1()
		{
			return entero1;
		}
//***************************************************************************
//Este metodo muestra el dato entero2
		double GetEntero2()
		{
			return entero2;
		}
//***************************************************************************
//Este metodo cambia el valor de la variable entero1
		void SetEntero1(int n1)
		{
			entero1 = n1;
		}
//***************************************************************************
//Este metodo cambia el valor de la variable entero1
		void SetEntero2(int n2)
		{
			entero2 = n2;
		}
//***************************************************************************
//Este metodo calcula el mayor de la pareja de enteros
		int CalculaMayor()
		{
			int mayor = 0;
			if (entero1 < entero2)
			{
				mayor = entero2;
			}
			else
			{
				mayor = entero1;
			}
			return mayor;
		}
//***************************************************************************
//Este metodo calcula el menor de la pareja de enteros
		int CalculaMenor()
		{
			int menor = 0;
			if (entero1 < entero2)
			{
				menor = entero1;
			}
			else
			{
				menor = entero2;
			}
			return menor;
		}
//***************************************************************************
//Este metodo comprueba si son divisibles
		bool CompruebaSiDivide()
		{
			bool es_divisor = false; 
			if ((CalculaMayor() % CalculaMenor()) == 0)
			{
					es_divisor = true;
			}
		return es_divisor;
		}
//***************************************************************************
//Este metodo intercambia las variables
		void IntercambiaVariables()
		{
			int aux = 0;
			aux = entero1;
			entero1 = entero2;
			entero2 = aux;
		}
//***************************************************************************
//Este metodo calcula el mcd
		int mcd()
		{
			int resultado = 0;
			for (int i = 2; i <= entero1; i++)
				if((entero1 % i == 0) && (entero2 % i ==0))
				{
					resultado = i;
				}
				else
				{
					resultado = 1;
				}
		return resultado;
		}
};
int main(){
   
	int n1 = 0;
	int n2 = 0;
	int menu = 11;

	//Creo el objeto de la clase
	ParejaEnteros objeto1(n1,n2);
	
	cout << "\n--------------------";
	cout << "\nMENU DE SELECCION";
	cout << "\n--------------------\n\n";
	cout << "1--- Muestra el entero 1" <<endl;
	cout << "2--- Muestra el entero 2" <<endl;
	cout << "3--- Muestra los dos enteros" <<endl;
	cout << "4--- Cambia el valor del entero 1" <<endl;
	cout << "5--- Cambia el valor del entero 2" <<endl;
	cout << "6--- Muestra quien es el mayor de los dos enteros" <<endl;
	cout << "7--- Muestra quien es el menor de los dos enteros" << endl;
	cout << "8--- Comprueba si son divisibles y quien es el dividendo y cual " 
		  << "el divisor" << endl;
	cout << "9--- Intercambia el valor de los enteros" << endl;
	cout << "10-- Calcula el mcd de los dos enteros" << endl;
	cout << "0--- SALIR DEL PROGRAMA";
	

	
	while ( menu != 0)
	{
		cout << "\n\nIntroduzca el numero de opcion a elegir: ";
		cin >> menu;

	if (( menu > 0 ) || ( menu < 10))  
	{
		switch (menu)
		{
		case 1:
			cout << "\n\n--------------------->\n";
			//Muestro los numeros mediante los metodos GetEntero1
			cout << "El primer entero es: " << objeto1.GetEntero1() << endl;
			break;
		
		case 2:
			cout << "\n\n--------------------->\n";
			//Muestro los numeros mediante los metodos GetEntero2
			cout << "El primer segundo es: " << objeto1.GetEntero2() << endl;
			break;
		
		case 3:
			cout << "\n\n--------------------->\n";
			//Muestro los numeros mediante los metodos GetEntero1 y GetEntero2
			cout << "El primer entero es: " << objeto1.GetEntero1() << endl;
			cout << "El segundo entero es: " << objeto1.GetEntero2() << endl;
			break;

		case 4:	
			cout << "\n\n--------------------->\n";
			//Cambio los valores de los datos de la clase con lor metodos SetEntero1
			cout << "Introduzca el nuevo valor para el primer entero: ";
			cin >> n1;
			objeto1.SetEntero1(n1);
			cout << endl;
			break;
		
		case 5:
			cout << "\n\n--------------------->\n";
			//Cambio los valores de los datos de la clase con lor metodos SetEntero2
			cout << "Introduzca el nuevo valor para el segundo entero: ";
			cin >> n2;
			objeto1.SetEntero2(n2);
			cout << endl;
			break;

		case 6:
			cout << "\n\n--------------------->\n";
			//Muesto el mayor de los dos numeros mediante el metodo CalculaMayor
			cout << "El mayor de los 2 numeros es " << objeto1.CalculaMayor() << endl; 
			break;

		case 7:
			cout << "\n\n--------------------->\n";
			//Muestro el menor de los dos numeros mediante el metodo CalculaMenor
			cout << "El menor de los 2 numeros es " << objeto1.CalculaMenor() << endl;
			break;

		case 8:
			cout << "\n\n--------------------->\n";
			//Compruebo si son divisibles mediante el metodo CompruebaSiDividide
			//Muestro quien es divisor de quien en caso de que lo sean
			if (objeto1.CompruebaSiDivide() == true)
			{
				cout << "Son divisibles" << endl << endl;
				cout << "El dividendo es " << objeto1.CalculaMayor() << endl;
				cout << "El divisor es " << objeto1.CalculaMenor() << endl << endl;
			}
			else
			{
				cout << "No son divisibles" << endl << endl;
			}
			break;

		case 9:
			cout << "\n\n--------------------->\n";
			//Intercambio las variables
			cout << "Vamos a intercambiar las variables" << endl <<endl;
			objeto1.IntercambiaVariables();
	
			//Vuelvo a mostrar los numeros mediante los metodos GetEntero1 y GetEntero2
			cout << "Ahora primer entero es: " << objeto1.GetEntero1() << endl;
			cout << "Ahora segundo entero es: " << objeto1.GetEntero2() << endl << endl;
			break;

		case 10:
			cout << "\n\n--------------------->\n";
			//Calculo el maximo comun divisor con el metodo mcd
			cout << "El maximo comun divisor de " << objeto1.GetEntero1() << " y "
			<< objeto1.GetEntero2() << " es " << objeto1.mcd(); 
			break;
		}
	}
	else
	{
		cout << "\nIntroduce un valor valido\n";
	}
	
	}
	cout << "\n\nEL PROGRAMA A TERMINADO";
   cout << "\n\n";
	system("pause");
}
