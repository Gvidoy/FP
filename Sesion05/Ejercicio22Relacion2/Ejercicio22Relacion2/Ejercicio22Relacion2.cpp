/*
Este programa recorre un archivo con numeros, cuanta las repeticiones
de los numeros e indica cuantas veces se repiten, el programa finaliza
cuando encuentra un -1
GREGORIO VIDOY FAJARDO 1 2A ETSIIT UGR
*/
#include <iostream>
using namespace std;

int main(){
   
	int n = 0;
	int aux = 0;
	int i;
	bool primera = true;

	for ( i = 0; n > -1; i++)
	{
		cin >>  n;
	if (primera)
	{
		aux = n;
		primera = false;
	}
		if (n != aux)

		{
			cout <<" " << i << " " << aux;
			aux = n;
			i = 0;	
		}	
	}
   cout << "\n\n";
	system("pause");
}
