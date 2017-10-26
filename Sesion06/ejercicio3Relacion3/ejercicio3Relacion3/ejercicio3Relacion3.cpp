/*
Este programa calcula el exponencial de un numero introduccido por teclado
con el exponente indicado tambien introducido por teclado en la funcion
Potencia y el factorial del numero en la funcion Factorial.
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR
*/

#include <iostream>
using namespace std;

double Potencia(double x, int n)
{
	double aux = x;

	for (int i=1; i < n; i++)
	{ 
		aux= aux * x;
	}
	return aux;
}
double Factorial(double x)
{
	double x2 = x;
	for (int i=1; i < x; i++)
	{
		x2= x2 * i;
	}
	return x2;
}
int main()
{
	int exp = 0;
	double numero = 0;
	double poten = 0;
	double facto = 0;

	cout << "\nIntroduzca un numero: ";
	cin >> numero;
	cout << "\nIntroduzca el exponente: ";
	cin >> exp;

	poten = Potencia(numero,exp);
	facto = Factorial(numero);

	cout << "\n\nEl resultado de elevar " << numero << " a " << exp << " es: "

		  << poten << endl;
	cout << "\nEl factorial del numero " << numero << " es: " << facto;
   
   cout << "\n\n";
	system("pause");
}
