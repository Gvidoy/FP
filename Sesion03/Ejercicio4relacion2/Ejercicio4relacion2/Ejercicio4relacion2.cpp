/*
El programa recive un caracter comprueba si es mayuscula y si lo es la
devuelve la minuscula
Apartado B: Para comparar dos cadenas de caracteres aparte de incluir
la libresia string se utiliza la funcion strcmp que devuelve 0 si
son iguales menor que 0 si la cadena 1 es menor que la 2 y mayor que
0 si la cadena 1 es mayor que la 2.
Apartado C: Yo inicializaria la variable booleana a false para que
nunca se quedara con valor vacio.
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

	cout << "\nIntroduzce una letra: ";
	cin >> letra_original;

	if ( (letra_original >= 'A' ) && (letra_original <='Z') )
	{
		es_mayuscula = true;
	}

	if (es_mayuscula)
	{
		letra_convertida = letra_original + DISTANCIA_MAY_MIN;
	}else{
		letra_convertida = letra_original;
	}
	cout << "\nEl caracter " << letra_original
		  << " una vez convertido es: " << letra_convertida << "\n\n";

	system("pause");
}