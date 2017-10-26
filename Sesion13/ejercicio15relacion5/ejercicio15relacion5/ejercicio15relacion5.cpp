/*
///////////////////////////////////////////////////////////////////////////////
Se crea la claseMiMatrizRectangularCaracteres para obligar a que todas las
filas tengan el mismo número de columnas, es decir, que sea una matriz 
rectangular.
Se usa como dato miembro privado una matriz clásica en la forma:
char matriz_privada[MAXIMO_FILAS][MAXIMO_COLUMNAS];
Definid métodos para:
a) Obtener el número de filas y columnas utilizadas.
b) Obtener el carácter que haya en una fila y columna.
c) Devolver una fila completa como un vector de laSTL.
d) Añadir una fila entera. La fila será un vector de laSTL.
e) Encontrar un carácter.
f) Comprobar si es igual a otra matriz rectangular.
g) (Examen Febrero 2011)Obtener la traspuesta de la matriz.

*******************************************************************************
//Ejercicio15 Relacion5
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

class MiMatrizRectangularCaracteres
{
private:
	static const int MAXIMO_COLUMNAS = 20;
	static const int MAXIMO_FILAS = 10;
	char matriz_privada[MAXIMO_FILAS] [MAXIMO_COLUMNAS];
	int filas_utilizadas;
	int columnas_utilizadas;

public:
	MiMatrizRectangularCaracteres()
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
char GetElemento(int fila, int columna)
{
	if ((fila <= filas_utilizadas) && (columna <= columnas_utilizadas))
	{
		return matriz_privada[fila][columna];
	}
	else
		cout << "Posicion invalida";
}

//Este metodo devuelve una fila entera como un vector de la stl
vector <char> GetFila(int fila)
{
	vector <char> fila_seleccionada;
	char componente;
	for(int i=0; i < columnas_utilizadas; i++)
	{
		componente = matriz_privada[fila][i];
		fila_seleccionada.push_back(componente);
	}
	return fila_seleccionada;
}

//Este metodo añade una fila entera a la matriz la fila es un vector de la stl
void SetFila (vector <char> otra_fila)
{
	for(int i= 0; i < columnas_utilizadas ; i++)
	{
		matriz_privada [filas_utilizadas][i] = otra_fila.at(i);
	}
	filas_utilizadas++;
}

//Este metodo busca un caracter en la matriz
void EncuentraCaracter(char caracter)
{
	int i = 0;
	int j = 0;
	char buscando = matriz_privada[i][j];
	bool encontrado = 0;
	for (i = 0; ((i < filas_utilizadas) && (caracter != buscando)); i++)
	{
		for (j = 0; ((j < columnas_utilizadas) && (caracter != buscando)); j++)
		{
			buscando = matriz_privada[i][j];
			if (caracter == buscando)
			{
				encontrado = 1;
			}
		}
	}
	
	if (encontrado == 1)
	{
		cout << "La primera posicion del caracter buscado " << caracter << " es "
		  << "fila " << i << " columna " << j;
	}
	else
	{
		cout << "El caracter no se encuentra en la matriz";
	}
}

//Este metodo introduce un caracter en la matriz en una posicion determinada

void SetElemento(int fila, int columna, char elemento)
{
	matriz_privada[fila][columna]= elemento;
}

//Este metodo compara una matriz con otra matriz y comprueba que son iguales

bool ComparaMatrices (MiMatrizRectangularCaracteres otra_matriz)
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
MiMatrizRectangularCaracteres ObtenerTranspuesta()
{
	MiMatrizRectangularCaracteres transpuesta;
	char caracter;
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
		MiMatrizRectangularCaracteres Transpuesta = ObtenerTranspuesta();
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
				simetrica == 1;
			}
			else
			{
				simetrica == 0;
			}
		}
		diagonal ++;
	}
	return simetrica;
}
};

int main(){
   
	MiMatrizRectangularCaracteres objeto1;
	MiMatrizRectangularCaracteres objeto2;

	
	int dimension_columna = objeto1.GetMaximoColumnas();
	int dimension_fila = objeto1.GetMaximoColumnas();
	char letra = 'a';
	int fila = 0;
	bool cambio_de_fila = 1;
	bool inserta_dimension_columnas = 1;
	int tamano = 0;
	int tamano_fila = 0;
	int tamano_fila_devuelta = 0; 
	char para = 'S';
	bool simetrica = 0;
	bool simetrica2 = 0;

	while((tamano < dimension_fila) && (para == 'S'))
	{
		fila = tamano;
		while ((tamano_fila < dimension_columna)&& (letra != '9'))
		{	
			if (cambio_de_fila)
			{
			cout << "\Para cambiar de fila pulse 9 " << endl;
			}
			cout << "Fila ----->  " << fila << " Introduzca una letra para el vector: ";
			cin >> letra;
			if (letra != '9')
			{
				objeto1.SetElemento(tamano, tamano_fila , letra);
				tamano_fila++;
			}
			cout << endl;
		}	

		if(inserta_dimension_columnas)
		{
			objeto1.SetColumnasUtilizadas(tamano_fila);
			inserta_dimension_columnas = 0;
			dimension_columna = tamano_fila;
			letra = '0';
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

//Llamo al primer metodo que me comprueba si la matriz es simetrica
	simetrica = objeto1.CompruebaSimetrica();

	if(simetrica == 1)
	{
		cout << "\nLA MATRIZ ES SIMETRICA";
	}
	else
	{
		cout << "\nLa matriz NO es simetrica";
	}

//LLamo al segundo metodo que me comprueba si la matriz es simetrica
	simetrica2 = objeto1.CompruebaSimetricaUnoAUno();

	if(simetrica == 1)
	{
		cout << "\nLA MATRIZ ES SIMETRICA";
	}
	else
	{
		cout << "\nLa matriz NO es simetrica";
	}

   cout << "\n\n";
	system("pause");
}
