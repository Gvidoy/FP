/*
Se añade un metodo para modificar una posicion del vector ocupada.
Ejercicio2 Relacion4
GREGORIO VIDOY FAJARDO
CURSO 1
GRUPO A2
ETSIIT UGR
*/

#include <iostream>
using namespace std;



class MiVectorCaracteres
{
private:
	//tamaño del vector
	static const int Max_Vector = 5; 
	char Mivector[Max_Vector];
	bool es_palindromo;
	int aux;
	int ocupacion_del_vector;

public:
	
	//constructor
	MiVectorCaracteres()
	{
		es_palindromo = true;
	}
	
	//**************************************************************************
	//En este metodo compruebo si el vector es palindromo o no
	void EsPalindromo()
	{
		//utilizo aux para ir recorriendo el vector hacia atras
		aux = ocupacion_del_vector;
		//El bucle va recorriendo desde 0 hasta n/2 + 1 y desde tamaño ocupado hacia
		//atras
		for(int i=0; (i < (ocupacion_del_vector/2) + 1) && (es_palindromo == true) ; i++)
		{
			//voy decrementando aux y lo decremento antes puesto que la posicion 4 en un
			//vector realmente es la 3 puesto que comienza en 0
			aux--;
			if (Mivector[i] != Mivector[aux])
			{
				es_palindromo = false;		
			}
		}
	}
	
	//Este metodo se utiliza para modificar una posicion del vector que ya este
	//ocupada de antemano si no esta ocupada no la modifica
	//**************************************************************************
	void Modifica(char letra, int pos)
	{
		if ((pos > 0) || (pos < (ocupacion_del_vector - 1 )))
		{
			SetVector(letra,pos);
			cout << "\nLa posicion " << pos << " del vector ahora es : "
				  << Mivector[pos];
		}
		else
		{
			cout << "La posicion esta ocupada o no es valida";
		}
	}

	//**************************************************************************
	//En este metodo muestro la constante Max_Vector
	int GetMaxVector()
	{
		return Max_Vector;	
	}
	//**************************************************************************
	//En este metodo introduzco datos en el vector
	void SetVector(char letra, int pos)
	{
		Mivector[pos] = letra;
	}
	//**************************************************************************
	//En este metodo introduzco la cantidad de ocupacion del vector
	void SetOcupacionDelVector(int tamano)
	{
		ocupacion_del_vector = tamano;
	}
	//**************************************************************************
	//En este metodo muestro la cantidad que tiene ocupada el vector
		int GetOcupacionDelVector()
	{
		return ocupacion_del_vector;
	}
	//**************************************************************************
	//Este metodo ejecuta el metodo que comprueba si es palindromo y devuelve
	//un cout si es palindromo o no.
	void Ejecucion()
	{
	//Llamo al metodo que comrueba si el vector es palindromo
	EsPalindromo();
	if (es_palindromo == true)
	{
		cout << "\n\nEl vector introducido es palindromo";
	}
	else
	{
		cout << "\n\nEl vector introducido no es palindromo";
	}	
	}
};

int main(){
   
	int tamano = 0;
	char letra = 0;
	bool para = 0;
	int pos = 0;
	//creo el objeto
   MiVectorCaracteres objeto1;
	
	//Se introducen los datos en el vector utilizando el booleano para, para 
	//detener la introcucion de datos en caso de que no se quieran introducir
	//mas datos
	for ( int i = 0; (i < objeto1.GetMaxVector()) && (!para) ; i++)
	{
		cout << "Introduzca una letra para el vector: ";
		cin >> letra;
		cout << endl;
		objeto1.SetVector(letra,i);
		cout << "\n¿Desea continuar?,introduzca 0 para continuar 1 para terminar: ";
		cin >> para;
		cout << endl << endl;
		tamano++;
	}
	//intruzco el tamaño que ocupa el vector por si no se quiere ocupar todo
	objeto1.SetOcupacionDelVector(tamano);
	//Solicito los parametros a modificar del vector
	cout << "Introduce la posicion del vector a modificar: ";
	cin >> pos;
	cout << "Introduce el nuevo caracter: ";
	cin >> letra;		
	//Le paso los parametros al metodo modifica
	objeto1.Modifica(letra , pos);
	
	

   cout << "\n\n";
	system("pause");
}
