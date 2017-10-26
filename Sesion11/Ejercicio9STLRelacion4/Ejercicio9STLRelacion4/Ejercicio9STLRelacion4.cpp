/*

//Ejercicio9 Relacion4
//GREGORIO VIDOY FAJARDO
//CURSO 1
//GRUPO A2
//ETSIIT UGR
////////////////////////////////////////////////////////////////////////////////////
*/


#include <iostream>
#include <vector>

using namespace std;

	//**************************************************************************
	//En esta funcion recive la letra a comparar

	int CuantasHay(int letra,vector <int> Contador_mayusculas)
	{
		char Abc;
		Abc = letra - 65;
		return Contador_mayusculas[Abc];
	}

		//**************************************************************************
	//En esta funcion cuenta las mayusculas de un vector

	vector<int> IncrememtaCuenta(int mayuscula ,vector <int> Contador_mayusculas)
	{
		int indice;
		//Escojo las mayusculas
		if ((mayuscula >= 'A') && (mayuscula <= 'Z'))
		{
		      //Le resto a la letra 65 para que me de su posicion y asi se sumen
				//en orden alfabetico
				indice = mayuscula - 65;
				//Sumo 1 por cada vez que aparezca una mayuscula igual
				Contador_mayusculas[indice] = Contador_mayusculas[indice] +1;
		}
		return Contador_mayusculas;
	}
	

int main(){
	
	//Vector
	vector <int> Contador_mayusculas(30);
	char letra = 0;
	bool para = 0;

	//Se introducen los datos en el vector utilizando el booleano para, para 
	//detener la introcucion de datos en caso de que no se quieran introducir
	//mas datos

	while(!para)
	{
		cout << "Introduceuna letra para el vector, para salir pulse '.'"
			  << " : ";
		cin >> letra;
		cout << endl;
		if(letra == '.')
		{
			para = true;
		}
		else
		{
		Contador_mayusculas = IncrememtaCuenta(letra,Contador_mayusculas);
		}
	}
	
	para = false;

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
		  << CuantasHay(letra,Contador_mayusculas) << " mayusculas" << endl << endl;
		}
	}
   
   cout << "\n\n";
	system("pause");
}
