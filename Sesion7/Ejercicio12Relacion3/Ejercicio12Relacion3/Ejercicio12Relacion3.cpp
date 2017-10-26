/*
Este programa calcula el numero perfecto mas cercano menor que el valor
introducido
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR
*/

#include <iostream>
#include <cmath>

using namespace std;
//Cabeceras de las funciones
int BuscaNumero(int tope);
int CalculaPerfecto (int aux);

//Esta funcion decrementa el numero "n" y se lo pasa a la funcion
//CalculaPerfecto.
//Despues CalculaPerfecto le devuelve el valor de la suma de sus
//divisores y esta funcion ademas comprueba que es  perfecto.
int BuscaNumero(int tope)
{
	bool esPerfecto = false;
	int recibe = 0;
	for (int i = tope ; ((i >= 1) && (esPerfecto == false)) ; i--)
	{
		recibe = CalculaPerfecto(i);
		if (recibe == i)
		{
			//Este booleano me indica que a aparecido el primer perfecto
			//para parar la ejecucion del bucle.
			esPerfecto = true;
		}
	}
	return(recibe);
}

//Esta funcion recibe el numero de la funcion anterior, calcula sus divisores
//y los suma en una variable acumuladora.
int CalculaPerfecto(int aux)
{
	int acumulador = 0;
	for ( int k = 1 ; k <= aux/2 ; k++)
		{
				if ((aux % k) == 0  )
				{
				acumulador = acumulador + k;
				}
		}
		return (acumulador);
}

int main()
{
	int n;
	int perfecto;

	cout << endl << "Introduzca el numero tope ";
	cin >> n;
	
	perfecto=BuscaNumero(n);//Le paso el numero a la funcion que sera el tope.
	
	cout << endl << endl << "--------> El numero perfecto mas proximo a " 
		  << n << " es " << perfecto << endl << endl;
   cout << "\n\n";
	system("pause");
}
