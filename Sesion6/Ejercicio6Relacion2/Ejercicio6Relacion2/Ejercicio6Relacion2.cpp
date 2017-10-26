/*
El programa recibe un caracter y utiliza las funciones Esminuscula del
ejercicio 5 para comprovar si es mayuscula o minuscula utilizando
un buleano con valor true para minuscula y false para mayuscula,
luego he creado una funcion llamada EsCaracter que comprueba si es un
caracter distinto de una letra lo que se le ha introducido, devolviendo
un boleano true si es distinto de letra o false si no lo es.
Despues de la funcion Transforma, llamo a la funcion EsCaracter 
para saber si se trata de un caracter y EsMinuscula para saber si esta
en mayuscula o minuscula, si esta en mayuscula la paso a minuscula
si esta en minuscula la paso a mayuscul y si es caracter lo muestro.
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR.
*/

#include <iostream>
using namespace std;

const int DistMinusMayus = 'A'-'a'; //Declarando la variable fuera de la
//funcion la puedo utilizar dentro de ellas, no se repite codigo y 
//ahora es una variable global

//Esta funcion me indica si es mayuscula o minuscula
bool EsMinuscula( char una_letra)
{
	bool minuscula = false;
	if ((una_letra >= 'a') && (una_letra <='z'))
	{
			minuscula = true;
	}
return minuscula;

}

//Esta funcion comprueba si es un caracter o letra
bool EsCaracter ( char una_letra)
{
	bool caracter = true;
	if((una_letra >= 'A' && una_letra <= 'Z') || (una_letra >= 'a' && una_letra <= 'z'))
	{
		caracter = false;
	}
return caracter;
}

//Esta funcion no la utilizo	
char Convierte_a_Mayuscula ( char una_letra)
{
	bool min;
	min = EsMinuscula(una_letra);
	//const int DistMayusMinus = 'A'-'a';
	char resultado;
	if (min == true)
	{
		resultado = DistMinusMayus + una_letra;
	}
	else
	{
		resultado = una_letra;		
	}
	return resultado;
}

//Esta funcion llama a la funcion EsMinuscula y EsCaracter para saber
//que tiene que hacer con el caracter introducido
char Transforma(char una_letra)
{
bool letra;
bool caracter;
//const int DistMinusMayus = 'A'-'a';
char resultado;

//Llamo a las otras dos funciones
letra = EsMinuscula(una_letra);
caracter = EsCaracter(una_letra);

   if ((letra == true) && (caracter == false))
	{
		resultado = DistMinusMayus + una_letra;
	}
	else if ((letra == false) && (caracter == false))
	{
		resultado = una_letra - DistMinusMayus;
	}
	else
	{
		resultado = una_letra;
	}
	return resultado;
}

	
int main(){
   char letra;
	char resultado;
	cout << "Introduzca una letra: ";
	cin >> letra;

	resultado = Transforma(letra);
	cout << "la letra introducida es: " << resultado;
	
	cout << "\n\n";
	system("pause");
}
