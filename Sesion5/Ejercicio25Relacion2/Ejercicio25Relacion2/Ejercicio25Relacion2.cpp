/*
Este programa dibuja un cuadrado con empezando en 1 y terminando en 6.
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR.
*/

#include <iostream>
using namespace std;

int main(){
   int tope = 6;      // El numero de digitos maximo en la segunda vuelta
	int para = tope;   // El numero de digitos maximo en la primera vuelta
	int i = 1;      // Variable de incremento
	int j = 1;      // Variable de incremento
	bool primera = true;  //bool para la primera
	
	for ( i ; i <= para ; i++)
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
			j = j - 5; //Necesitamos que j empiece en numeros atras que p.
		   for ( j ; j <= tope ; j++)
				cout << j << " ";
				cout << "\n";
		}
		tope++;                        //Incrementamos la el tope del bucle 
	}
   cout << "\n\n";
	system("pause");
}
