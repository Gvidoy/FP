/* Este programa nos pide la longitud del radio, calcula el área del círculo y
la longitud de la circunferencia correspondientes, y nos muestra los resultados en
pantalla Autor: GREGORIO VIDOY FAJARDO*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double long_radio;
	const double PI = 3.1415927;
	double long_circunf;
	double area_circunf;

	cout << "\nIntroduzca la longitud del radio de la circunferencia ";
	cin >> long_radio;

	long_circunf = 2 * PI * long_radio;
	area_circunf = PI * long_radio * long_radio;

	cout << "\nLa longitud de la cirunferencia es " << long_circunf << "\n\nEl area de la circunferencia es " << area_circunf << endl << endl;

	system("pause");

}

	




