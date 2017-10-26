/* 
Este programa recoge un valor del 0 al 9 y lo guarda en una variable 
tipo char luego iguala la variable a una de tipo entero y devuelve el valor 
introducido en lugar del valor en decimal para ello le restamos 48 que es su 
equivalencia en la tabla ASCII GREGORIO VIDOY FAJARDO ETSIIT UGR 1 GRUPO A2
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int entero;
	char car;

	cout << "\nIntroduzca un numero del (0 al 9): ";
	cin >> car;

	entero = car - 48; // Le resto 48 para obtener su equivalencia en la 
	                   // tabla ASCII

	cout <<"\n\nEl numero introducido es: " << entero << endl << endl;
	system("pause");
}