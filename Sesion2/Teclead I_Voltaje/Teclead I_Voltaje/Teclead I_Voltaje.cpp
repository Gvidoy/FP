/* Programa para calcular el voltaje, se solicita por pantalla la intensidad y la resistencia.
voltaje = intensidad * resistencia. Autor: GREGORIO VIDOY FAJARDO*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double inten;
	double resis;
	double volta;

	cout << "Introduzca la intensidad: ";
	cin >> inten;
	cout << "Introduzca la resistencia: ";
	cin >> resis;

	volta = inten * resis;

	cout << "\nEl voltaje es " << volta << "\n\n" ;
	system("pause");

}






