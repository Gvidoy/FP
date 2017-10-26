/*
Este programa pinta un triangulo y un cuadrado con los valores iniciales
y valores finales introducidos por el usuario.
GREGORIO VIDOY FAJARDO 1 2A ETSIIT UGR
*/

#include <iostream>
using namespace std;

int main()
{
   int tope = 0;
	int j = 0;
	int i = 0;
	bool primera = true;
	int para = 0;
	int resta = 0;

// Triangulo generico
	cout << "\nIntroduzca el valor inicial de la piramide: ";
	cin >> i;
	cout << "\nIntroduzca el valor final de la piramide: ";
	cin >> tope;

	for ( i ; i <= tope; i++) 
	{
		cout << endl;
		j=i;
	
		for ( j ; j <= tope; j++)
		cout << j << " ";
	  
	}
	 
// Cuadrado generico	
	cout << "\n\nIntroduzca el valor inicial de la cuadrado: ";
	cin >> j;
	cout << "\nIntroduzca el valor final de la cuadrado: ";
	cin >> tope;
	cout << endl;
	para = tope;
	resta = tope - j;
	for ( i = 1 ; i <= para ; i++)
	{
		if ( primera == true)
		{

		for ( j ; j <= tope  ; j++)
			cout << j << " ";
		   cout << "\n";
			primera = false;

		}
		else if ( !primera )
		{
			j = j - resta;   
		   for ( j ; j <= tope ; j++)
				cout << j << " ";
				cout << "\n";
		}
		tope++;                  //Incrementamos la el tope del bucle 
}

   cout << "\n\n";
	system("pause");
}
