/*
Este programa calcula los dias, horas, minutos y segundos en su 
rango correspondiente, intruducciendo horas, minutos y segundos por teclado
GREGORIO VIDOY FAJARDO ETSIIT UGR 1 GRUPO A2
*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int horas;
	int minutos;
	int segundos;
	int totalDias;
	int totalSegundos;
	int totalMinutos;
	int totalHoras;
	int auxMinutos;
	int auxHoras;

	horas = 0;
	minutos = 0;
	segundos = 0;
	totalDias = 0;
	totalSegundos = 0;
	totalMinutos = 0;
	totalHoras = 0;
	auxMinutos = 0;
	auxHoras = 0;

	cout << "\nIntroduzca el numero de horas ";
	cin >> horas;
	cout << "\n\nIntroduzca el numero de minutos ";
	cin >> minutos;
	cout << "\n\nIntroduzca el numero de segundos ";
	cin >> segundos; 
	
	totalSegundos = segundos % 60; //1
	auxMinutos = (minutos + (segundos / 60)); // 2
	auxHoras = (horas + (auxMinutos / 60)); // 3
	totalMinutos = auxMinutos % 60; // 4
	totalHoras = auxHoras % 24; // 5
	totalDias = auxHoras / 24; // 6

	cout << "\n\n" << totalDias << " Dias, " << totalHoras << " Horas, " 
		  << totalMinutos << " Minutos, " << totalSegundos << " Segundos." 
		  << endl << endl;

	/*
	1) en esta variable se realiza el calculo de los segundos.
	2) en esta variable hago un paso intermedio para calcular los minutos puesto 
	que este valor lo necesitare mas adelante y aunme falta calcular el resto 
	entre 60.
	3) en esta variable hago un paso intermedio para calcular las horas puesto 
	que este valor lo necesitare mas adelante y aun me falta calcular el 
	resto entre 24.
	4) en esta variable almaceno el total de minutos haciendo el resto de 60.
	5) en esta variable almaceno el total de horas haciendo el resto de 24.
	6)en esta variable calculo los dias dividiendo el total de horas brutas
	entre 24.
	*/
	system("pause");

}