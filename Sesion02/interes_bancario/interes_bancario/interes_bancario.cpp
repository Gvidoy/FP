/* El programa lee una cantidad de capital y un interes desde teclado y
calcula el total del dinero que se tendrá al cabo de un año. Autor: GREGORIO VIDOY FAJARDO*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double capital;
	double interes;
	double total;

	cout << "Introduzca la cantidad: " ;
	cin >> capital;
	cout << "Introduzca el Interés: " ;
	cin >> interes;

	total = capital + (capital * (interes / 100)) ;

	cout << "\nEl total del capital resultante de aplicarle el interes es " <<total << "\n\n" ;
	system("pause") ;

/*no es posible porque a terminado la ejecucion del programa para que fuera posible tendriamos que crear un bucle*/

}



