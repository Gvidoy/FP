/* El programa intercambia los contenidos de dos 
variables enteras leyendo desde el teclado dos variables edadPedro y
edadJuan. Autor: GREGORIO VIDOY FAJARDO*/

#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int edadPedro;
	int edadJuan;
	int aux; //Variable auxiliar creada para hacer el intercambio.
	
	cout << "Introduzca la edad de Juan " ;
	cin >> edadJuan;
	cout << "Introduzca la edad de Pedro " ;
	cin >> edadPedro;

	/* asi funciona siempre que el dato no sea un string
		edadJuan = edadPedro + edadJuan;
		edadPedro = edadJuan - edadPedro;
		edadJuan = edadJuan - edadPedro;
	*/

	/*Esta solución de crear una variable auxiliar funcionaría tanto para int como para string*/
	aux = edadJuan;
	edadJuan = edadPedro;
   edadPedro = aux;


	cout << "\nLa edad de Pedro es " << edadPedro << "\n\nLa edad de Juan es " << edadJuan << "\n\n" ;

	system("pause");

	/*Igualando las dos variables no funciona porque se pisan las variables*/
}