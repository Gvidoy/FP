/*
Este programa pinta una piramide recorriendo los numeros del 1 al 6
GREGORIO VIDOY FAJARDO 1 2A ETSIIT UGR.
*/

#include <iostream>
using namespace std;

int main(){
   
	int tope =6;
	int j;
	int i;
	for ( i = 1; i <= tope; i++) 
	{
		cout << endl;
		j=i;
	
		for ( j ; j <= tope; j++)
		cout << j << " ";
	  
	}

   cout << "\n\n";
	system("pause");
}
