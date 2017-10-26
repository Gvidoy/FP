/* 
Este programa pasa un caracter introducido en mayuscula a minuscula,
sumandole 32 para obener su correspondiente en la tabla ASCII
GREGORIO VIDOY FAJARDO ETSIIT UGR 1 GRUPO A2
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	char letra;

	cout << "\nIntroduzca una letra en Mayuscula ";
	cin >> letra;

	letra = letra + 32; // Se le suma 32 al caracter para obtener su minuscula

	cout << "\n\nLa minuscula del carazter introducido es: " << letra << endl 
		  << endl;
	system("pause");
}
