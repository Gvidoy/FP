/*
Este ejercicio realiza 3 acciones
1) Recibe un caracter y si es minuscula se cumple la condición y
la variable booleana minuscula devuelve true si es mayuscula false.
2) Recibe la edad de una persona si es menor de 18 o mayor de 65
se cumple la condición iguala la booleana menorMayor a true y 
devuelve 1 
3) Recive un año y comprueba si es bisiesto, si es bisiesto
iguala la variable booleana a true y devuelve 1 si no false
y devuelve 0
GREGORIO VIDOY FAJARDO ETSIIT UGR 1 GRUPO A2
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	char letra;
	bool minuscula = false;
	int edad;
	bool menorMayor = false;
	int año;
	bool bisiesto = false;
	
	cout << "\nIntroduzca una letra (Mayuscula o minuscula) ";
	cin >> letra;
	cout << "\nIntrouzca una Edad ";
	cin >> edad;
	cout << "\nIntroduzca un Año ";
	cin >> año;

	if ((letra >= 97) && (letra <= 122)) minuscula = true; //1 
	if ((edad < 18) || (edad > 65)) menorMayor = true; //2
	if (((año % 4 == 0) && (año % 100 != 0)) || //3
		(año % 400 == 0)) bisiesto = true;

	cout << "\n" << minuscula << endl;
	cout << "\n" << menorMayor << endl;
	cout << "\n" << bisiesto << endl << endl;

system ("pause");

	/* 
	1 Comprueba en la tabla ascci el valor introuccido si esta entre 97 
	y 122 que son las minusculas devuelve true si no deja 
	la variable booleana igual que esta inicializada en false.
	2 Comprueba si la edad introduccida es menor de 18 o mayor de 65
	si se cumple la condicción iguala la variable menorMayor a true
	devuelve 1 si esta en el rango de 18 a 65 la deja como esta 
	inicializada en false.
	3 Comprueba si un año es bisiesto, para ello primero hace el
	resto de la division del año entre 4 si da 0 es que es divisible por
	4 y tambien hace el resto de la division del año entre 100, y 
	comprueba que no sea divisible entre 100, estas dos condiciones se
	tienen que dar a la vez por eso esta con el operador y "&&", ademas
	comprueba que sea divisible entre 400, si estas condiciones se
	dan iguala la booleana bisiesto a true y devuelve 1 si no la
	deja como esta en false y devuelve 0;
	*/
}