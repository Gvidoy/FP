/*
///////////////////////////////////////////////////////////////////////////////
Se crear la clase Palabra que permite almacenar un conjunto de caracteres
que representarán una palabra. Se define un método EsIgual al que se le pase como
parámetro otra palabra y determine si son iguales atendiendo al siguiente criterio: La
primera letra de ambas palabras es igual, la última letra de ambas palabras también
es igual y el resto de las letras son las mismas pero no están necesariamente en las
mismas posiciones.

//Ejercicio18 Relacion5
//GREGORIO VIDOY FAJARDO
//CURSO 1
//GRUPO A2
//ETSIIT UGR
////////////////////////////////////////////////////////////////////////////////
*/

#include <iostream>
using namespace std;

class Palabra
{
private:
	
	//tamaño del vector
	static const int MAX_VECTOR = 30;
	char MivectorPalabra[MAX_VECTOR];
	int aux;
	int ocupacion_del_vector;	

public:
	
	//constructor
	Palabra()
	{
	}
	
	//Este metodo se utiliza para modificar una posicion del vector que ya este
	//ocupada de antemano si no esta ocupada no la modifica
	//**************************************************************************

	void Modifica(char letra, int pos)
	{
		if ((pos > 0) || (pos < (ocupacion_del_vector)))
		{
			SetVector(letra,pos);
			cout << "\nLa posicion " << pos << " del vector ahora es : "
				  << MivectorPalabra[pos];
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
		return MAX_VECTOR;	
	}
	//**************************************************************************
	//En este metodo introduzce componentes en el vector

	void SetVector(char letra, int pos)
	{
		MivectorPalabra[pos] = letra;
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
	//En este metodo recive una posicion y devuelve su componente
	char GetComponente(char pos)
	{
		return MivectorPalabra[pos];
	}

	//**************************************************************************
	//Este metodo comprueba si dos palabras tienen el mismo numero de caracteres,
	//si la primera letra de cada una son iguales, si la ultima letra de cada
	//una son igulas, si tienen las mismas componentes aunque esten en diferente
	//orden.

	bool EsIgual(Palabra otra_palabra)
	{
		bool igual = 0;
		int dimension_palabra = ocupacion_del_vector -1 ;
		int dimension_otra_palabra = otra_palabra.GetOcupacionDelVector() -1;
		bool para = 0;

		if (dimension_palabra == dimension_otra_palabra)
		{
			igual = 1;
			cout <<" entro en el primer if" << endl;
		}


		if((MivectorPalabra[0] != otra_palabra.GetComponente(0)) || 
			(MivectorPalabra[dimension_palabra] != 
			otra_palabra.GetComponente(dimension_otra_palabra)) ||
			(igual != 1))
		{
			cout <<" entro en el segundo if" << endl;
			igual = 0;
		}

		for (int i = 1; (i < dimension_palabra) && (igual != 0); i++)
		{
			cout <<" entro en el primer for" << endl;
			para = 0;
			for(int j =1; (j < dimension_palabra) && (para == 0); j++)
			{
				cout <<" entro en el segundo for" << endl;
				if(MivectorPalabra[i] == otra_palabra.GetComponente(j))
				{
					cout <<" entro en el tercer if" << endl;
					para = 1;
				}
			}
			if (para == 0)
			{
				igual = 0;
			}
		}
		return igual;
	}

};

int main(){
   //objetos
	Palabra una_palabra;
	Palabra otra_palabra;

	char letra;
	bool para = 0;
	int tope = una_palabra.GetMaxVector();
	int tamano = 0;

	//Introduzco la primera palabra
		cout << "\nIntroduce una letra , para salir pulse '.'"
			  << " : ";
		for ( int i = 0; (i < tope) && (!para) ; i++)
	{
		cin >> letra;
		if(letra == '.')
		{
			para = true;
		}
		else
		{
		una_palabra.SetVector(letra,i);
		tamano++;
		}
	}

	//Introduzco el tamaño que ocupa el vector por si no se quiere ocupar todo
	una_palabra.SetOcupacionDelVector(tamano);
	para = false;
	tamano = 0;

	cout << "\nIntroduce la palabra a comparar " << endl << endl;
		//Introduzco la segunda palabra
	cout << "Introduce una letra , para salir pulse '.'"
		  << " : ";
	for ( int i = 0; (i < tope) && (!para) ; i++)
	{
		cin >> letra;
		if(letra == '.')
		{
			para = true;
		}
		else
		{
		otra_palabra.SetVector(letra,i);
		tamano++;
		}
	}

	//Introduzco el tamaño que ocupa el vector por si no se quiere ocupar todo
	otra_palabra.SetOcupacionDelVector(tamano);

	if(una_palabra.EsIgual(otra_palabra) == 1)
	{
		cout << " Las palabras son iguales ";
	}
	else
	{
		cout << "Las palabras son diferentes ";
	}

   cout << "\n\n";
	system("pause");
}
