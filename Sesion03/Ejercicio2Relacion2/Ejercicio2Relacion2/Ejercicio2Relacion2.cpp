/*
Este programa recibe la edad de una persona y los ingresos
si esta persona es jubilado y tiene unos ingresos inferiores
a 300 € se le aplica una subida del 5% y se devuelve el
total de ingresos con la subida aplicada, si no se devuelve
un mensaje indicando que no se le aplica la subida
GREGORIO VIDOY FAJARDO ETSIIT UGR 1 GRUPO A2
*/
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
		int edad = 0;
		double ingresos = 0;
		double subida = 0;
		bool jubilado; 
		
		cout << "\nIndroduzca la edad: ";
		cin >> edad;
		cout << "\nIntroduzca los ingresos: ";
		cin >> ingresos;
		
		//Parte A mezclando entrada salida
		
		if ((edad >= 65 ) && (ingresos < 300 )){
			
			subida = ingresos + ( ingresos * 0.05 );
			cout << "\nSu saldo se ha incrementado en: " << subida << endl << endl;
		
		}else{

			cout << "\nNo es aplicable la subida" << endl << endl;

		}
		
		/*

		//Parte B separando entrada y salida de los calculos, me ayudo de la
		// booleana jubilado. 

		if ((edad >= 65 ) && (ingresos < 300 )){ 
			
			jubilado = true;
			subida = ingresos + ( ingresos * 0.05 );

		}else{

			jubilado = false;
		}
		
		if (jubilado == true){
			
			cout << "\nSu saldo se ha incrementado en: " << subida << endl << endl;
		
		}else{

			cout << "\nNo es aplicable la subida" << endl << endl;

		}*/
		system("pause");
}
