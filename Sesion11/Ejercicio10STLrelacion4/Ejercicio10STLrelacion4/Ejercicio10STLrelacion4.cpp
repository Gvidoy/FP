/*
////////////////////////////////////////////////////////////////////////////////////

Este programa que va leyendo caracteres hasta que se encuentre un 
punto ’.’. Queremos contar el número de veces que aparece cada una de las 
letras mayúsculas.
Para ello se crea una clase específica Mayusculas que implemente los
métodos necesarios para realizar la cuenta de las mayúsculas. Lo que se 
pretende es que la clase proporcione los métodos siguientes:
void IncrementaCuenta (char mayuscula)
int CuantasHay (char mayuscula)
Para contarlas se almacena el numero de veces que aparece la mayusula en
un vector de la STL.

***********************************************************************************

//Ejercicio10 Relacion4
//GREGORIO VIDOY FAJARDO
//CURSO 1
//GRUPO A2
//ETSIIT UGR
////////////////////////////////////////////////////////////////////////////////////
*/


#include <iostream>
#include <vector>

using namespace std;

class Mayusculas
{
private:
	//Vector
	vector <int> Contador_mayusculas;

public:

	//constructor
	Mayusculas(): Contador_mayusculas(30)
	{
	
	}
	//**************************************************************************
	//En este metodo recive la letra a comparar

	int CuantasHay(int letra)
	{
		char Abc;
		Abc = letra - 65;
		return Contador_mayusculas[Abc];
	}
	//**************************************************************************
	//En este metodo cuenta las mayusculas de un vector

	void IncrememtaCuenta(int mayuscula)
	{
		int indice;

		      //Le resto a la letra 65 para que me de su posicion y asi se sumen
				//en orden alfabetico
				indice = mayuscula - 65;
				//Sumo 1 por cada vez que aparezca una mayuscula igual
				Contador_mayusculas[indice] = Contador_mayusculas[indice] +1;

	}
};	

int main(){
   
	char letra = 0;
	int para = 0;

	//Creo el objeto para Mayusculas
	Mayusculas objeto_mayus;

	//Se introducen los datos en el vector, se introduce "." 
	//detener la introcucion de datos en caso de que no se quieran introducir
	//mas datos

	while(letra != '.')
	{
		cout << "Introduceuna letra para el vector, para salir pulse '.'"
			  << " : ";
		cin >> letra;
		cout << endl;

		//Escojo las mayusculas
		if ((letra >= 'A') && (letra <= 'Z'))
		{
			objeto_mayus.IncrememtaCuenta(letra);
		}
	}
	
	//Introduzco le paso los caracteres a al metodo para que incremente el
	//contador de mayusculas

	while (!para)
	{
		cout << "Introduzca una letra para comprobar cuantas mayusculas hay: ";
		cin >> letra;
		cout << endl;
		if(letra == '.')
		{
			para = true;
		}
		else
		{
		cout << "\nDe la letra " << letra << " hay " 
		     << objeto_mayus.CuantasHay(letra) << " mayusculas" << endl << endl;
		}
	}

   cout << "\n\n";
	system("pause");
}
