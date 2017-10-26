/*
Este programa separa por digitos un numero entero introduccido por
teclado.
GREGORIO VIDOY FAJARDO ETSIIT UGR 1 GRUPO A2
*/

#include<iostream>
#include<cmath>

using namespace std;
int main (){

	int numero;
	int digito1;
	int digito2;
	int digito3;
	
	numero = 0;
	digito1 = 0;
	digito2 = 0;
	digito3 = 0;

	cout <<"\nIntroduzca un numero de 3 digitos: ";
	cin >> numero;

	digito1 = numero / 100; // 1
	digito2 = (numero % 100) / 10; // 2
	digito3 = numero % 10; // 3

	cout << "\n\n" << "   " << digito1 << "   " << digito2 << "   " 
		  << digito3 << endl << endl ; 

	system("pause");

/*
1) Para obtener el primer digito dividimos el numero introduccido
entre 100 para que daria como resultado 3,75 al ser de tipo entero
nos quedamos con la parte entera.
2) Para obtener el segundo digito cojemos el resto de la division
del numero entre 100 (al tener 3 cifras) al ser la variable de tipo
entero nos quedamos con los dos digitos del resto y estos a su vez
lo dividimos entre 10 para obtener el segundo digito.
3) Para obtener el 3 digito hacemos el resto del numero entre 10
y obtenemor el 3 digito.
*/
}

