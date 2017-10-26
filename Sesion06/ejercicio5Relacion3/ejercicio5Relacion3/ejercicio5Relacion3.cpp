/*
Este programa recive una caracter y la funcion Convierte_a_Mayuscula
llama a la funcion Esminuscula, que comprueba si el caracter introducido
es minuscula, si lo es lo transforma a mayuscula y si no lo deja como
esta.
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR.
*/

#include <iostream>
using namespace std;

int EsMinuscula( char una_letra)
{
	bool minuscula = false;

	if ((una_letra >= 'a') && (una_letra <='z'))
	{
			minuscula = true;
	}
	 return minuscula;

}
int Convierte_a_Mayuscula ( char una_letra)
{
	bool min;
	min = EsMinuscula(una_letra);
	const int DistMayusMinus = 'A'-'a';
	char resultado;
	if (min == true)
	{
		resultado = DistMayusMinus + una_letra;
	}
	else
	{
		resultado = una_letra;
		
	}
	return resultado;
}
	
int main(){
   char letra;
	bool comprueba;
	char resultado;
	cout << "Introduzca una letra: ";
	cin >> letra;

	resultado = Convierte_a_Mayuscula(letra);
	cout << "la letra introducida es: " << resultado;
	
	
   cout << "\n\n";
	system("pause");
}
