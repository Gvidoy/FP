/*
///////////////////////////////////////////////////////////////////////////////
Se considera la clase ColeccionPuntos2D que se usará para almacenar y gestionar
una colección de datos de tipo Punto2D. Por simplicidad consideraremos 
únicamente puntos cuyas coordenadas sean positivas.
Ralizar un programa que lea del teclado un número indeterminado de datos de 
tipo Punto2D de manera que termine la lectura si el usuario escribe -1 cuando 
el programa le pide la abscisa de un nuevo punto. Los puntos leídos los 
almacena en un objeto ColeccionPuntos2D.
A continuación pide los datos necesarios, y crea un objeto Circunferencia,
y finalmente muestra cuáles de los puntos almacenados en la colección
ColeccionPuntos2D está en el círculo delimitado por la circunferencia.
///////////////////////////////////////////////////////////////////////////////
*****************************
** Ejercicio8 Relacion5    **
** GREGORIO VIDOY FAJARDO  **
** CURSO 1                 **   
** GRUPO A2                **
** ETSIIT UGR              **
*****************************
*/


#include <iostream>
#include <vector> //Incluyo esta libreria porque uso un vector de la stl.

using namespace std;

//Esta clase almacena los puntos
class Punto2D
{
private:
	double abscisa;
	double ordenada;

public:
	Punto2D(double una_y, double una_x)
	{
		abscisa = una_x;
		ordenada = una_y;

	}


//Este metodo cambia los valores de los datos privados
//*****************************************************************************
	void Setpuntos(double y, double x)
	{
		abscisa = x;
		ordenada = y;
	}
//Este metodo devuelve el valor de la abscisa
//*****************************************************************************
	double Get_x()
	{
		return abscisa;
	}
//Este metodo devuelve el valor de la ordenada
//*****************************************************************************
	double Get_y()
	{
		return ordenada;
	}
};

//En esta clase almaceno los objetos de la clase Punto2D en un vector de la stl
class ColeccionPuntos2D
{
private:
//En este vector alamaceno los objetos de la clase Punto2D
	vector <Punto2D> vector_de_objetos;

public:

	ColeccionPuntos2D()
	{
	}

//Este metodo devuelve el tamaño ocupado del vector
//*****************************************************************************
	int GetOcupacion()
	{
		return vector_de_objetos.size();
	}

//Este metodo introduce un objeto contenido en el vector
//*****************************************************************************
	void Set_vector_de_objetos(Punto2D objeto)
	{
		vector_de_objetos.push_back(objeto);
	}

//Este metodo devuelve un objeto contenido en el vector
//*****************************************************************************
	Punto2D Getobjeto(int pos)
	{
		return vector_de_objetos.at(pos);
	}

};

//En esta clase se defina la circunferencia
class Circunferencia
{
private:
	Punto2D centro;
	double radio;

	const double PI; 

public:
	Circunferencia(Punto2D el_centro, double el_radio ):PI(3.1416), 
	centro (el_centro)
	{
		radio = el_radio;
	}

//Este metodo calcula la longitud de la cirunferencia
//*****************************************************************************

	double LongitudCircunferencia()
	{
		double longitud = (2.0 * PI)*radio;
		return longitud;
	}

//Este metodo calcula el area del cirulo interior
//*****************************************************************************

	double Area()
	{
		double area = PI*(radio*radio);
		return area;
	}

//Este metodo devuelve el valor del centro de la circunferencia
//*****************************************************************************
	Punto2D GetCentro()
	{
		return centro;
	}

//Este metodo calcula el diametro de la circunferencia 
//*****************************************************************************

	double Diametro()
	{
		double diametro = PI*(2.0 * radio );
		return diametro;
	}

//Este metodo comprueba que dos puntos estan contenidos en una ciscunferencia
//*****************************************************************************
	bool PuntoContenido(Punto2D otropunto)
	{
		double restax = pow (centro.Get_x()- otropunto.Get_x(),2);
		double restay = pow (centro.Get_y()- otropunto.Get_y(),2);
		double resultado = restax+restay;
		double radio_cuadrado = pow (radio,2);

		if(resultado <= radio_cuadrado)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

//Este metodo comprueba que varios puntos estan contenidos en una ciscunferencia
//*****************************************************************************
	void PuntosContenidos(ColeccionPuntos2D Puntos_para_comparar)//le paso el objeto
	{
//Almaceno el objeto para no tener que estar llamando al metodo continuamente
      Punto2D otropunto = Puntos_para_comparar.Getobjeto(0);
//Almaceno el total de ocupacion del vector
		int tope = Puntos_para_comparar.GetOcupacion();
		double restax;
		double restay;
		double resultado;
		double radio_cuadrado = pow (radio,2);
//Alamaceno la x de un punto
		double otro_punto_x;
//Alamaceno la x de un punto
		double otro_punto_y;

		cout << endl << endl;

		for(int i = 0; i < tope; i++)
		{
		otropunto = Puntos_para_comparar.Getobjeto(i);
		restax = pow (centro.Get_x()- otropunto.Get_x(),2);
		restay = pow (centro.Get_y()- otropunto.Get_y(),2);
		resultado = restax+restay;
		otro_punto_x =  otropunto.Get_x();
		otro_punto_y =  otropunto.Get_y();

				if(resultado <= radio_cuadrado)
				{
					cout << "El punto x: " << otro_punto_x << " El punto y " << otro_punto_y 
						  << " esta contenido" << endl; 
				}
				else
				{
					cout << "El punto x: " << otro_punto_x << " El punto y " << otro_punto_y 
						  << " NO ESTA CONTENIDO" << endl; 	
				}
		}

	}
};

int main(){
   
int x;
int y;
int radio;

//Creo el objeto
ColeccionPuntos2D objeto_vector_objetos;
//Con una lectura adelantada solicito los datos para ingresar los puntos
cout << "Para dejar de intruducir puntos presione -1";
cout << "\nIntroducce el valor de x: ";
cin >> x;
cout << "\nIntroduce el valor de y: ";
cin >> y;

while (x != -1)
{
//Filtro los puntos negativos que no estan contemplados en el ejercicio
	if ((x > 0) && (y > 0))
	{
	//Creo el objeto para la clase Punto2D
	Punto2D un_objeto(y,x);
	//Le paso el objeto al metodo de la clase ColeccionPuntos2D
	objeto_vector_objetos.Set_vector_de_objetos(un_objeto);
	
	cout << "\nPunto insertado correctamente";
	}
	else
	{
		cout << "\nEL PUNTO PROPORCIONADO NO PUEDE TENER UN VALOR NEGATIVO";
	}
	cout << "\n\nPara dejar de intruducir puntos presione -1";
	cout << "\nIntroducce el valor de x: ";
	cin >> x;
	cout << "\nIntroduce el valor de y: ";
	cin >> y;

}	

//Solicito los datos de la circunferencia
cout << "\nIntroduce el radio de la circunferencia ";
cin >> radio;
cout << "\nIntroduce la coordenada X del centro de la circunferencia ";
cin >> x;
cout << "\nIntroduce la coordenada Y del centro de la circunferencia ";
cin >> y;

//Creo el objeto de la clase Punto2D
Punto2D centro(y,x);

//Creo el objeto de la clase Circunferencia
Circunferencia unacircunferencia(centro,radio);

//Llamo al metodo que me comprueba si los puntos estan contenidos
unacircunferencia.PuntosContenidos(objeto_vector_objetos);

   cout << "\n\n";
	system("pause");
}
