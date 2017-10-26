/*
////////////////////////////////////////////////////////////////////////////////////
//Creo una clase CaminoComeCocos para representar el camino seguido por el
//usuario en el juego del ComeCocos (Pac-Man). Internamente debe uso un string
//como dato miembro privado. Tiene métodos para subir, bajar, ir a la izquierda e
//ir a la derecha. Dichos métodos únicamente añadirán el carácter correspondiente
//’s’, ’b’, ’i’, ’d’ a la cadena privada.
//Dispone PosicionMovimientosConsecutivos() que calcula
//la posición donde se encuentre la primera secuencia de al menos n movimientos
//consecutivos iguales a uno dado (que pasaremos como parámetro al método).
//Por ejemplo, en el camino de abajo, si n = 3, y el movimiento buscado es ’s’,
//entonces dicha posición es la 6.
//{’b’,’b’,’i’,’s’,’s’,’b’,’s’,’s’,’s’,’s’,’i’,’i’,’d’}

***********************************************************************************

//Ejercicio11 Relacion4
//GREGORIO VIDOY FAJARDO
//CURSO 1
//GRUPO A2
//ETSIIT UGR
////////////////////////////////////////////////////////////////////////////////////
*/



#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Defino la clase comecocos
class CaminoComeCocos 
{
private:
//Vector string
string a_buscar;

public:

//Constructor
	CaminoComeCocos() :a_buscar()
{
}

//METODO PARA EL APARTADO A
//***************************************************************************

	int PosicionMovimientosConsecutivos(int n)
	{
//En esta variable voy sumando las veces que encuentra un movimiento igual
//y consecutivo
		int encontrada = 0;
//Almaceno la primera posicion de los movimientos consecutivos
		int resultado = 0; 
//Almaceno el movimiento a buscar
		char movimiento = a_buscar[n];
//Esta variable la utilizo para ir indicandole a find a partir de que posicion
//tiene que buscar en el vector.
		int posicion = 0;

		//En el caso que se introduzca la posicion 0 como es valida devuelvo 0		
		if (n == 0)
		{
			resultado = 0;
		}
		else
		{
			for (int i = 0; (encontrada < n) && (i < a_buscar.size()); i++)
			{
//Alamaceno la posicion en la que a encontrado el caracter o movimiento
				posicion = a_buscar.find(movimiento, (posicion));	

//Comparo para poder incrementar el contador			
				if (posicion >= 0 && a_buscar.at(n) == a_buscar.at(posicion))
				{
					encontrada++;
				}
				else
//En caso que las veces encontradas de los movimientos no sea suficiente
//igualo a 0 encontrada para que siga buscando
				{
					encontrada = 0;
				}
//Incremento la posicion a buscar para el find
					posicion++;
			}

//En el caso que no se hayan encontrado suficientes movimientos consecutivos
//devuelvo 1
			if (encontrada < n)
			{
				resultado = -1;
			}
//Devuelvo la primera posicion de los movimientos consecutivos encontrados
			else
			{
				resultado = posicion -1 ;
			}
		}
	return resultado;
	}

/*
//METODO PARA EL APARTADO B
//***************************************************************************

	int PosicionMovimientosConsecutivos(int n)
	{

//En esta variable voy sumando las veces que encuentra un movimiento igual
//y consecutivo
		int encontrada = 0;
//En esta guardando la posicion del primer caracter encontrado de los
//movimientos consecutivos
		int posicion = 0;
//Devuelvo el resultado del metodo
		int resultado = 0; 

		//En el caso que se introduzca la posicion 0 como es valida devuelvo 0
		if (n == 0)
		{
			resultado = 0;
		}
		else
		{

//Recorro el vector asta el final de este o hasta que se encuentren los
//n movimientos
			for (int i = 0 ; (encontrada < n) && (i < a_buscar.size()) ; i++)
			{ 
//Comparo la posicion original con la que me marca la i
				if( a_buscar[n] == a_buscar[i])
				{
					encontrada++;
					posicion = i;
				}
//En caso que no sean consecutivas igualo a 0 encontrada.
				else
				{
					encontrada = 0;
				}
			}
//En el caso que no se hayan encontrado suficientes movimientos consecutivos
//devuelvo 1
			if (encontrada < n)
			{
				resultado = -1;
			}
//Devuelvo la primera posicion de los movimientos consecutivos encontrados
			else
			{
				resultado = (posicion - encontrada) + 1;
			}
		}
	return resultado;
	}
*/

//METODO PARA SUBIR "INSERTA s en el vector"
//***************************************************************************
	
	void subir()
	{
		a_buscar.push_back('s');
	}

//METODO PARA BAJAR "INSERTA b en el vector"
//***************************************************************************
	
	void bajar()
	{
		a_buscar.push_back('b');
	}

//METODO PARA IZQUIERDA "INSERTA i en el vector"
//***************************************************************************
		
	void izquierda()
	{
		a_buscar.push_back('i');
	}
//METODO PARA DERECHA "INSERTA d en el vector"
//***************************************************************************
	
	void derecha()
	{
		a_buscar.push_back('d');
	}
};


//Programa principal
int main()
{
//variable en la que le paso el movimiento a buscar
	int movimiento;
//En esta variable almaceno el resultado del metodo
	int resultado;
// En esta variable almaceno el desplazamiento a introducir
	char desplazamiento = 'h';

//Creo el objeto
	CaminoComeCocos objeto;

//Menu para introducir los movimientos, llaman a los metodos, subir, bajar
//izquierda,derecha.
	while(desplazamiento != '.')
	{
	cout << "Introduce un movimiento: ";
	cin >> desplazamiento;

	    switch (desplazamiento)
		 {
		       case 's': objeto.subir();
			            break;   
				 case 'b': objeto.bajar();
					      break;
				 case 'i': objeto.izquierda();
			            break;
				 case 'd': objeto.derecha();
			            break;

	}
	}
//Solicito el movimiento a buscar
	cout << "Introduce el movimiento a buscar: ";
	cin >> movimiento;
//Asigno a resultado lo que me devuelve el metodo
	resultado = objeto.PosicionMovimientosConsecutivos(movimiento);
	
//Comparo el resultado en caso que el movimiento elegido no se encuentre en el
//vector
	if (resultado == -1)
	{
		cout << "\nNo existe ninguna posicion de movimientos consecutiva que coincida";
	}
	else
	{
		cout << "\nEl resultado es: " << resultado;
	}

	

   cout << "\n\n";
	system("pause");
}
