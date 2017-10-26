/*Este programa calcula la media aritmetica y la desviación tipica de la altura de 3 personas ingresadas por teclado, 
realiza los calculos y los muestra por pantalla. Autor: GREGORIO VIDOY FAJARDO*/

#include <iostream>
#include <cmath>

using  namespace std;
int main(){

	double persona1;
	double persona2;
	double persona3;
	double mediaAritmetica; //En esta variable se guarda el calculo de la media aritmetica que posteriormente se imprime por pantalla y ademas se utiliza para calcular la desviación tipica.
	double desviacionTipica; //En esta variable se almacena el calculo de la desviación tipica para posteriormente imprimirlo por pantalla.

	persona1 = 0;
	persona2 = 0;
	persona3 = 0;
	mediaAritmetica = 0;
	desviacionTipica = 0;

	cout << "\n\nIntroduzca la altura de la primera persona ";
	cin >> persona1;
	cout << "\n\nIntroduzca la altura de la segunda persona ";
	cin >> persona2;
	cout << "\n\nIntroduzca la altura de la tercera persona ";
	cin >> persona3 ;

	mediaAritmetica = (persona1 + persona2 + persona3) / 3.0;
	desviacionTipica = sqrt (1/3.0 * ( pow ((persona1 - mediaAritmetica) , 2.0) + pow ((persona2 - mediaAritmetica), 2.0) + pow ((persona3 - mediaAritmetica), 2.0))); 

	cout <<"\n\nLa media aritmetica de la altura de las 3 personas es " << mediaAritmetica << endl << endl; 
	cout <<"La desviación tipica de la altura de las 3 personas es " << desviacionTipica << endl <<endl;

	system("pause");

}
