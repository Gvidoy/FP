/* Este programa que lee los coeficientes reales media y desviación tipica de una función gaussiana,
luego el programa lee un valor de abscisa x e imprime el valor que toma la función en x,
intentando hacer comprender mejor el codigo he separado la formula en 3 pasos definidos al lado
de las 3 variables usadas para la formula Autor: GREGORIO VIDOY FAJARDO*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double media;
	double desviacionTipica;
	double abscisa;
	double gaussiana1;  //En esta variable se guarda el resultado de la primera parte de la formula.
	double gaussiana2;  //En esta variable se guarda el resultado de la segunda parte de la formula el exponencial. 
	double resultado;   //En esta variable se obtiene el resultado de aplicar la formula multiplicando las dos partes.
	const double PI = 3.1415927;
	
	cout << "\nIntroduzca la media ";
	cin >> media;
	cout << "\n\nIntroduzca la desviación tipica ";
	cin >> desviacionTipica;
	cout << "\n\nIntrozca el valor del eje de abcisa \"x\" ";
	cin >> abscisa;

	gaussiana1 = 1.0 / (desviacionTipica * sqrt(2.0 * PI)); 
	gaussiana2 = exp ((-1.0/2.0)* pow(((abscisa - media) / desviacionTipica),2.0));
	resultado = gaussiana1 * gaussiana2;


	cout <<"\n\nEl resultado " << resultado << endl << endl;
	
	

	system("pause");

}





