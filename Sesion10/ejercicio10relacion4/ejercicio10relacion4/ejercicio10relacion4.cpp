/*
///////////////////////////////////////////////////////////////////////////////
//Se implementan una clase Mayusculas la cual tiene un metodo IncrementaCuenta
//que recive los caracteres y aumenta el contador del vector en el caso que el
//caracter pasado se mayuscula y un metedo, cuantas hay que recibe una letra
//y devuelve cuantas mayusculas iguales hay en el caso que las haya.

//Ejercicio10 Relacion4
//GREGORIO VIDOY FAJARDO
//CURSO 1
//GRUPO A2
//ETSIIT UGR
////////////////////////////////////////////////////////////////////////////////
*/

#include <iostream>
using namespace std;

class Mayusculas
{
private:
	static const int Max_Vector = 30;
	int Contador_mayusculas[Max_Vector];
	int ocupacion_del_vector;

public:
	Mayusculas()

	{
		ocupacion_del_vector = 24;
	}

	//**************************************************************************
	//En este metodo recive la letra a comparar

	int CuantasHay(int letra)
	{
		char Abc;
		Abc = letra - 65;
		return Contador_mayusculas[Abc];
	}
	//**************************************************************************
	//En este metodo cuenta las mayusculas de un vector

	void IncrememtaCuenta(int mayuscula)
	{
		int indice;
		//Escojo las mayusculas
		if ((mayuscula >= 'A') && (mayuscula <= 'Z'))
		{
		      //Le resto a la letra 65 para que me de su posicion y asi se sumen
				//en orden alfabetico
				indice = mayuscula - 65;
				//Sumo 1 por cada vez que aparezca una mayuscula igual
				Contador_mayusculas[indice] = Contador_mayusculas[indice] +1;
		}
	}
	//**************************************************************************
	//Este metodo asigna 0 a todas las posiciones ocupadas del vector para poder
	//poder sumarle

	void TodosACero()
	{
		for (int i = 0; i <= ocupacion_del_vector; i++)
		{
			Contador_mayusculas[i]= 0;
		}
	}
};


class MiVectorCaracteres
{
private:
	
	//tamaño del vector
	static const int Max_Vector = 30;
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
	
	/*
	//------------
	//Apartado a
	//------------
	//**************************************************************************
	//En este metodo elimina las mayusculas de un vector

	void EliminaRepetidos()
	{
		char sin_repetidos[Max_Vector];
		sin_repetidos[0] = Mivector[0];
		int ocupados = 1;
		bool existe;
		for ( int i=0; i <= ocupacion_del_vector; i++ )
		{
		existe = false;
			for (int j=0; j < ocupados; j++) //&& !existe; j++)
			{
				if ( Mivector[i] == sin_repetidos[j]) 
				{
					existe = true;
				}
			}	
			if ( !existe )
			{
				sin_repetidos[ocupados] = Mivector[i];
				ocupados++;
			}
			
		}
		cout << "\n\nvector Sin repetidos" << endl << endl;
		for ( int i = 0; i < ocupados; i++ )
		{
		cout << "Posicion " << i << " contenido: " << sin_repetidos[i] << endl;
		}
	}
	*/
	//------------
	//Apartado b
	//------------
	//**************************************************************************
	//En este metodo elimina las mayusculas de un vector
	/*
	void EliminaRepetidos()
	{
		bool repetido = false;
		for(int i = 0 ; i <= (ocupacion_del_vector + 1) ; i++ )
		{
			repetido = false;
			for (int j = 0; (j < i) && (!repetido); j++)
			{
				if ( Mivector[i] == Mivector[j])
				{
					Elimina(i);
					repetido = true;
				}
			}
		}
	};
	*/

	//**************************************************************************
	//En este metodo elimina las mayusculas de un vector

	void EliminaMayusculas()
	{
		for ( int i = 0; i <= ocupacion_del_vector; i++ )
		{
			while ((Mivector[i] >= 'A') && (Mivector[i] <= 'Z'))
			{
				Elimina(i);
			}
		}
	}

	//**************************************************************************
	//En este metodo elimino la posicion selecionada del vector

	void Elimina(int pos)
	{	
		char aux2;
		int pos2 = pos +1;
		if ((pos > 0) || (pos <= ocupacion_del_vector))
		{	
			for ( int i=0; pos <= ocupacion_del_vector; i++)
			{
				aux2 = Mivector[pos];
				Mivector[pos]= Mivector[pos2];
				Mivector[pos2]= aux2;
				pos++;
				pos2++;
			}
		}				
		ocupacion_del_vector--;
	}

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
		if ((pos > 0) || (pos < (ocupacion_del_vector)))
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
	//Este metodo intercambia las comopentes de un vector siempre que esten ocupadas
	//**************************************************************************

	void IntercambiaComponentes(int pos, int pos2)
	{
		if ((pos > 0) || (pos < (ocupacion_del_vector)) || (pos2 > 0) || (ocupacion_del_vector))  
		{
			char aux2;
			aux2 = Mivector[pos];
			Mivector[pos]= Mivector[pos2];
			Mivector[pos2]= aux2;
		}	
	}
	//Este metodo invierte la posicion de los componentes del vector
	//**************************************************************************

	void Invierte()
	{
		aux = ocupacion_del_vector;
			for(int i=0; (i < (ocupacion_del_vector/2) + 1); i++)
		{
			//voy decrementando aux y lo decremento antes puesto que la posicion 4 en un
			//vector realmente es la 3 puesto que comienza en 0
			aux--;
			IntercambiaComponentes(i,aux);
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
	//**************************************************************************
	//Muestra el contenido del vector Mivector

	char GetMivector(int pos)
	{
		return Mivector[pos];
	}
};

int main(){
   
	int tamano = -1;
	char letra = 0;
	bool para = 0;
	int pos = 0;
	int pos2 = 0;
	
	//creo el objeto para Mivector
   MiVectorCaracteres objeto1;
	
	//Creo el objeto para Mayusculas
	Mayusculas objeto_mayus;

	//Ejecuto el metodo que pone todas las posiciones a 0
	objeto_mayus.TodosACero();

	//Se introducen los datos en el vector utilizando el booleano para, para 
	//detener la introcucion de datos en caso de que no se quieran introducir
	//mas datos

	for ( int i = 0; (i < objeto1.GetMaxVector()) && (!para) ; i++)
	{
		cout << "Introduceuna letra para el vector, para salir pulse '.'"
			  << " : ";
		cin >> letra;
		cout << endl;
		if(letra == '.')
		{
			para = true;
		}
		else
		{
		objeto1.SetVector(letra,i);
		objeto_mayus.IncrememtaCuenta(letra);
		tamano++;
		}
	}
	
	para = false;

	//Introduzco el tamaño que ocupa el vector por si no se quiere ocupar todo
	objeto1.SetOcupacionDelVector(tamano);
	
	//Llamo al metodo para comprobar los duplicados

	while (!para)
	{
		cout << "Introduzca una letra para comprobar cuantas mayusculas hay: ";
		cin >> letra;
		cout << endl;
		if(letra == '.')
		{
			para = true;
		}
		else
		{
	cout << "\nDe la letra " << letra << " hay " 
		  << objeto_mayus.CuantasHay(letra) << " mayusculas" << endl << endl;
		}
	}


	
   cout << "\n\n";
	system("pause");
}
