/*
///////////////////////////////////////////////////////////////////////////////
Se define la clase MiMatrizRectangularEnteros de forma análoga a la clase
MiMatrizRectangularCaracteres (ejercicio 14 de esta relación de problemas).
Se amplia el conjunto de métodos básicos con otros que nos permiten realizar las si
guientes operaciones:

Se crea un metodo MayorMinimoDeCadaFila para:
b) (Examen Septiembre 2011) Calcular la posición de aquel elemento que sea el
mayor de entre los mínimos de cada fila. Por ejemplo, dada la matriz M (3  4),
9 7 4 5
2 18 2 12
7 9 1 5
el máximo entre 4, 2 y 1 (los mínimos de cada fila) es 4 y se está en (0 ,2).

Se crea un metodo MaxiMin para:
c ) Ver si existe un valor MaxiMin, es decir, que sea a la vez, máximo de su fila y
mínimo de su columna.

*******************************************************************************
//Ejercicio16 Relacion5
//GREGORIO VIDOY FAJARDO
//CURSO 1
//GRUPO A2
//ETSIIT UGR
///////////////////////////////////////////////////////////////////////////////
*/



#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MiMatrizRectangularEnteros
{
private:
	static const int MAXIMO_COLUMNAS = 20;
	static const int MAXIMO_FILAS = 10;
	int matriz_privada[MAXIMO_FILAS] [MAXIMO_COLUMNAS];
	int filas_utilizadas;
	int columnas_utilizadas;

public:
	MiMatrizRectangularEnteros()
	{}

//Este metodo devuelve el maximo de columnas a utilizar
	int GetMaximoColumnas()
	{
		return MAXIMO_COLUMNAS;
	}

//Este metodo devuelve el maximo de filas a utilizar
	int GetMaximoFilas()
	{
		return MAXIMO_FILAS;
	}
//Este metodo introduce el numero de filas utilizadas
	void SetFilasUtilizadas(int tamano_fila)
	{
		filas_utilizadas = tamano_fila;
	}

//Este metodo introduce el numero de columnas utilizadas
	void SetColumnasUtilizadas(int tamano_columna)
	{
		columnas_utilizadas = tamano_columna;
	}

//Este metodo devuelve la cantidad de columnas utilizada
	int GetColumnasUtilizadas()
	{
		return columnas_utilizadas;
	}

//Este metodo devuelve la cantidad de filas utilizada
	int GetFilasUtilizadas()
	{
		return filas_utilizadas;
	}

//Este metodo devuelve el valor que hay en una fila y columna determinada
int GetElemento(int fila, int columna)
{
	if ((fila <= filas_utilizadas) && (columna <= columnas_utilizadas))
	{
		return matriz_privada[fila][columna];
	}
	else
		cout << "Posicion invalida";
}

//Este metodo devuelve una fila entera como un vector de la stl
vector <int> GetFila(int fila)
{
	vector <int> fila_seleccionada;
	int componente;
	for(int i=0; i < columnas_utilizadas; i++)
	{
		componente = matriz_privada[fila][i];
		fila_seleccionada.push_back(componente);
	}
	return fila_seleccionada;
}

//Este metodo añade una fila entera a la matriz la fila es un vector de la stl
void SetFila (vector <int> otra_fila)
{
	for(int i= 0; i < columnas_utilizadas ; i++)
	{
		matriz_privada [filas_utilizadas][i] = otra_fila.at(i);
	}
	filas_utilizadas++;
}

//Este metodo busca un entero en la matriz
void EncuentraUnEntero(int caracter)
{
	int i = 0;
	int j = 0;
	int buscando = matriz_privada[i][j];
	bool encontrado = 0;
	int fila = 0;
	int columna = 0;
	for (i = 0; ((i < filas_utilizadas) && (caracter != buscando)); i++)
	{
		for (j = 0; ((j < columnas_utilizadas) && (caracter != buscando)); j++)
		{
			buscando = matriz_privada[i][j];
			if (caracter == buscando)
			{
				encontrado = 1;
				fila = i;
				columna = j;
			}
		}
	}
	
	if (encontrado == 1)
	{
		cout << "La posicion del caracter buscado " << caracter << " es "
		  << "fila " << fila << " columna " << columna;
	}
	else
	{
		cout << "El caracter no se encuentra en la matriz";
	}
}

//Este metodo introduce un caracter en la matriz en una posicion determinada

void SetElemento(int fila, int columna, int elemento)
{
	matriz_privada[fila][columna]= elemento;
}

//Este metodo compara una matriz con otra matriz y comprueba que son iguales

bool ComparaMatrices (MiMatrizRectangularEnteros otra_matriz)
{
	int dimension_fila_otra_matriz = otra_matriz.GetFilasUtilizadas();
	int dimension_columna_otra_matriz = otra_matriz.GetColumnasUtilizadas();
	bool son_iguales = 0;

	if ((filas_utilizadas != dimension_fila_otra_matriz) || (columnas_utilizadas != dimension_columna_otra_matriz))
	{
		son_iguales = 0;
	}
	else
	{
		son_iguales = 1;
	}
	for (int i = 0 ; (i < filas_utilizadas) && (son_iguales); i++)
		{ 
			for (int j = 0 ; (j < columnas_utilizadas) && (son_iguales); j++)
			{
				if (matriz_privada[i][j] != otra_matriz.GetElemento(i,j))
				{
					son_iguales = 0;
				}
			}
		}
 return son_iguales;
}
//Este metodo obtine la transpuesta de una matriz
MiMatrizRectangularEnteros ObtenerTranspuesta()
{
	MiMatrizRectangularEnteros transpuesta;
	int caracter;
	int tamano_columna_transpuesta = 0;
	int tamano_fila_transpuesta = 0;

	for(int i = 0; i < filas_utilizadas; i++)
	{
		for(int j = 0; j < columnas_utilizadas; j++)
		{
			caracter = matriz_privada[i][j];
			transpuesta.SetElemento(j,i,caracter);
			if (i == 0)
			{
			tamano_fila_transpuesta++;
			}
		}
		tamano_columna_transpuesta++;
	}
	transpuesta.SetFilasUtilizadas(tamano_fila_transpuesta);
	transpuesta.SetColumnasUtilizadas(tamano_columna_transpuesta);

	return transpuesta;
}

//ApartadoA
//Este metodo comprueba si una matriz es simetrica o no, primero comprueba
//si el numero de filas es igual al numero de columnas, porque para que sea
//simetrica tiene que ser cuadrada, luego llama al metodo
//devuelve su transpuesta y  luego al metodo que comprueba que son iguales.
bool CompruebaSimetrica()
{
	bool simetrica = 0;
	if(columnas_utilizadas == filas_utilizadas)
	{
		simetrica = 1;	
	}
	if(simetrica == 1)
	{
		MiMatrizRectangularEnteros Transpuesta = ObtenerTranspuesta();
		simetrica = ComparaMatrices(Transpuesta);
	}


	return simetrica;
}

//Este metodo comprueba 1 a 1 los elementos a un lado y otro de la diagonal
//No compruebo si es una matriz cuadrada o no
bool CompruebaSimetricaUnoAUno()
{
	bool simetrica = 1;
	int diagonal = 0;

	for(int i = 1; (i < filas_utilizadas) && (simetrica == 1); i++)
	{
		for (int j = 0; (j < diagonal) && (simetrica == 1); j++)
		{
			if (GetElemento(i,j) == GetElemento(j,i) )
			{
				simetrica = 1;
			}
			else
			{
				simetrica = 0;
			}
		}
		diagonal ++;
	}
	return simetrica;
}
//Este metodo calcula el mayor del minimo de cada fila
void MayorMinimoDeCadaFila()
{
	int entero = 0;
	int compara = 0;
	int max_mini_filas = 0;
	int max = 0;
	//En el vector almaceno la posicion de cada minimo, el indice me indica la
	//fila y el valor la columna
	int maximos[MAXIMO_FILAS]={0};

	
	//Recorro las filas
	for(int i = 0; i < filas_utilizadas; i++)
	{
		entero = matriz_privada[i][0];
		//Recorro las columnas
		for(int j = 0; j < (columnas_utilizadas); j++)
		{
			compara = matriz_privada[i][j];
			//comparo con el entero seleccionado y almaceno el entero minimo y su
			//posicion
			if(entero >= compara)
			{
				entero = compara;
				maximos[i]=j;	
			}
		}
		//Comparo el entero con el minimo de la fila anterior y si es mayor lo 
		//almaceno
		if (max_mini_filas < entero)
		{
			max_mini_filas = entero;
			max = i;
		}

	}
	cout << "El maximo de los minimos de cada fila es " << max_mini_filas
		  << " fila " << max << " columna " << maximos[max];	
}
//Este metodo comprueba si existe un valor que sea a la vez maximo de su fila
//y minimo de su columna
void MaxiMin()
{
	int entero = 0;
	int compara = 0;
	int columna = 0;
	int compara_columna;
	bool encontrado = 0;
	int fila = 0;
	bool para = 0;

	entero = matriz_privada[0][0];
	for(int i = 0 ; (i < filas_utilizadas) && (encontrado == 0); i++)
	{
		entero = matriz_privada[i][0];
		for (int j = 0 ; j < columnas_utilizadas; j++)
		{
			compara = matriz_privada[i][j];
			//selecciono el maximo de una fila
			if(entero < compara)
			{
				entero = compara;
				columna = j ;
				fila = i;
			}
		}
		para = 0;
		for (int k = 0; (k < filas_utilizadas)&& (para == 0); k++)
		{
			compara_columna = matriz_privada[k][columna];
			//compruebo si es el maximo de su columna, si lo es cambio de valor el 
			//booleano y paro la ejecucion del programa.
			if(entero < compara_columna)
			{ 
				encontrado = 1;
				fila = i;
			}
			else
				//Utilizo un else if para evitar que me compare asi mismo y de un falso
				//para
				if ((entero >= compara_columna)&& (k != fila))
			{
				encontrado = 0;
				//Cambio el valor de para para que en cuanto encuentre uno mayo detenga el
				//bucle
				para = 1;
			}
		}
	}
	if (encontrado == 1)
	{
	cout << " \nEl valor que es maximo de su fila y minimo de su coluna es " << entero
		  << " fila " << fila << " columna " << columna;
	}
	else
	{
		cout << "\nNo existe un valor que sea maximo de su fila y minimo de su columna";
	}
}
};

int main(){
   
	MiMatrizRectangularEnteros objeto1;

	int dimension_columna = objeto1.GetMaximoColumnas();
	int dimension_fila = objeto1.GetMaximoColumnas();
	char para = 'S';
	int fila = 0;
	int entero = 0;
	bool cambio_de_fila = 1;
	bool inserta_dimension_columnas = 1;
	int tamano = 0;
	int tamano_fila = 0;


	while((tamano < dimension_fila) && (para == 'S'))
	{
		fila = tamano;
		while ((tamano_fila < dimension_columna)&& (entero != -1))
		{	
			if (cambio_de_fila)
			{
			cout << "\nPara cambiar de fila pulse -1 " << endl;
			}
			cout << "Fila ----->  " << fila << " Introduzca una letra para el vector: ";
			cin >> entero;
			if (entero != -1)
			{
				objeto1.SetElemento(tamano, tamano_fila , entero);
				tamano_fila++;
			}
			cout << endl;
		}	

		if(inserta_dimension_columnas)
		{
			objeto1.SetColumnasUtilizadas(tamano_fila);
			inserta_dimension_columnas = 0;
			dimension_columna = tamano_fila;
			entero = 0;
			cambio_de_fila = 0;
		}
		cout << "\n\nFila introduccida"  << endl << endl;
		do
		{
		cout << "si desea terminar presione N, para continuar S: ";
		cin >> para;
		para = toupper(para);
		}
		while((para != 'S') && (para != 'N'));
		tamano++;
		tamano_fila = 0;
		cout << endl << endl;

	}
//Introduco el numero de filas utilizado
	objeto1.SetFilasUtilizadas(tamano);

	objeto1.MayorMinimoDeCadaFila();
	cout << endl;
	objeto1.MaxiMin();
   cout << "\n\n";
	system("pause");
}
