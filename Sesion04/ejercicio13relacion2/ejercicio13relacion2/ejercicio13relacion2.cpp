/*Este programa lee un caracter, si es minuscula repite el ciclo
hasta que el usuario introduce un caracter en mayuscula, cuando
introduce una mayuscula devuelve su minuscula
GREGORIO VIDOY FAJARDO 1 A2 ETSITT UGR
*/


#include <iostream>
using namespace std;

int main(){
   
	char letra_convertida; 
	char letra_original;
	const int DISTANCIA_MAY_MIN = 'a' - 'A';
	bool es_mayuscula = false;

	do
	{
		cout << "\nIntroduzca una letra en Mayuscula ";
		cin >> letra_original;
			if ( (letra_original >= 'A' ) && (letra_original <='Z') )
	
		es_mayuscula = true;
	
	}
	while ( es_mayuscula == false );

		letra_convertida = letra_original + DISTANCIA_MAY_MIN;			
	
		cout << "\n\nLa minuscula del caracter introducido es: " << letra_convertida 
			  << endl << endl;

   cout << "\n\n";
	system("pause");
}