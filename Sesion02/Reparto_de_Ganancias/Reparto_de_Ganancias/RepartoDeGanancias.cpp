/*El programa pide una total de ganancias de producto y muestra por pantalla el reparto de las ganancias que quedan de la siguiente manera
El dise�ador obtiene el doble que cada fabricante. Autor: GREGORIO VIDOY FAJARDO*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double totalGanancias;
	double dise�ador;
	double fabricante1;
	double fabricante2;
	double fabricante3;
	double division; //en esta variable se almacena el resultado de la divisi�n para utilizarlo mas tarde en los calculos.

	totalGanancias = 0;
	dise�ador = 0;
	fabricante1 = 0;
	fabricante2 = 0;
	fabricante3 = 0;
	
	cout <<"Ingrese el total de ganancias del producto ";
	cin >>totalGanancias;

	division = totalGanancias / 5.0;

	cout <<"\nLas ganancias del dise�ador son: " << 2*division << endl << endl;
	cout <<"Las ganancias del fabricante1 son: " << division << endl << endl;
	cout <<"Las ganancias del fabricante2 son: " << division << endl << endl;
	cout <<"Las ganancias del fabricante3 son: " << division << endl << endl;

	system("pause");
}



