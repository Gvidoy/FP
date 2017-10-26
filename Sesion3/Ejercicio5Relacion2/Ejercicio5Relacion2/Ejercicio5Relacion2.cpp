/*
Este programa recive un caracter y si es mayuscula devuelve su minuscula
si es minuscula devuelve su mayuscula y si es cualquier otro caracter 
devuelve el mismo.
GREGORIO VIDOY FAJARDO ETSIIT UGR 1 GRUPO A2
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char letra_convertida; 
	char letra_original;
	const int DISTANCIA_MAY_MIN = 'a' - 'A';
	bool es_mayuscula = false;
	bool es_minuscula = false;

	cout << "\nIntroduzce una letra: ";
	cin >> letra_original;

	if ( (letra_original >= 'A' ) && (letra_original <='Z') )
	{
		es_mayuscula = true;
	}

	if ( (letra_original >= 'a' ) && (letra_original <='z') )
	{
		es_minuscula = true;
	}
	 
	if (es_mayuscula)
	{
		letra_convertida = letra_original + DISTANCIA_MAY_MIN;

	}else{
		if (es_minuscula)
		{
			letra_convertida = letra_original - DISTANCIA_MAY_MIN;
		}else{
		letra_convertida = letra_original;
		}}

	cout << "\nEl caracter " << letra_original
		  << " una vez convertido es: " << letra_convertida << "\n\n";

	system("pause");
}