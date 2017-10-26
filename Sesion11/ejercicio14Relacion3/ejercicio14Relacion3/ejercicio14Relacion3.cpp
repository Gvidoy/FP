/*
La clase DepositoSimulacion se utiliza para simular prestamos, en ella
se crean dos metodos uno para saber cuanto capital se obtendra al cabo
de x años y otra en la que se calcula los años que tienen que pasar
hasta doblar la cantidad.
GREGORIO VIDOY FAJARDO 1 A2 ETSIIT UGR
*/
#include <iostream>
using namespace std;

class DepositoSimulacion
{
	public:
	
	// variable del objeto publicas, se puede acceder desde el main a ellas
	double interes;
	double anio;
	double capital;
	double total_capital;

	//Funcion tipo void no retorna nada solo el cout de dentro del bucle
	//Calcula el capital inicial en un numero de años introducido por el usuario
	void ReinvierteCapital()
	{
		
		for (int i=1 ; i <= anio ; i++)
		{
		capital = capital + (capital * (interes / 100)) ;
	   cout << "\nTotal en el año número " << i << " = " << capital << "\n\n" ;
		}
	
	}
	//Funcion tipo void no retorna nada solo el cout de dentro del bucle
	//Calcula el numero de años hasta llegar a doblar el capital.
	void DoblarCantidad()
	{
		int i = 1;
		total_capital = 2 * capital;
		for( i=1 ; capital <= total_capital; i++)
		{
		capital = capital + (capital * (interes / 100)) ;
		}
		cout << "\nEl numero de anios hasta doblar la cantidad inicial es: " 
			  << i << " \n\n";
	}

};


int main(){
   //objeto para la clase
	DepositoSimulacion ejemplo_prestamo;
	
	do
	{
	cout << "\nIntroduce capital inicial: ";
	cin  >> ejemplo_prestamo.capital;
	}
	while(ejemplo_prestamo.capital <= 0);

	do
	{
	cout << "\nIntroduce el interes: ";
	cin >> ejemplo_prestamo.interes;
	}
	while(ejemplo_prestamo.interes <= 0);

	do
	{
	cout << "\nIntroduce el numero de años: ";
	cin >> ejemplo_prestamo.anio;
	}
	while(ejemplo_prestamo.anio <= 0);
	
	cout << "\n\nEl capital final obtenido en los años indicados con el interes indicado es: " << endl;
	
	ejemplo_prestamo.ReinvierteCapital();
	
	cout << endl << endl;
	
	ejemplo_prestamo.DoblarCantidad(); 
	
	cout << "\n\n";
	system("pause");
}
