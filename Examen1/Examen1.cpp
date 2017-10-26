/*
GREGORIO VIDOY FAJARDO 1 A2
2-ADIVINA
eil40177
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

// NO EMPLEAR VARIABLES GLOBALESrr

int main()
{
int adivinar = 0;
int tentativo = 2;
char jugar = 's';
int aux = 0;
int aciertos = 0;
double porcentaje = 0;
int intentos = 0;
int medio_intentos = 0;


for ( int k=0; jugar == 's' ; k++)
{
   cout << "Introduce el numero a adivinar para que comience el juego: ";
   cin >> adivinar;

   for ( int j=0; (tentativo != adivinar) && (tentativo != 0); j++)
   {
      cout << "\n\nIntroduce un numero ";
      cin >> tentativo;
      cout << endl << endl;
      if ((tentativo < adivinar) && (tentativo != 0))
      {
         cout << "El numero a adivinar es mayor" << endl;
      }
      else if (tentativo > adivinar)
      {
         cout << "El numero a adivinar es menor" << endl;
      }
      else if (tentativo == adivinar)
      {
         aciertos++;
         intentos = j + intentos;
         
      }
   }

   cout << "¿Desea volver a jugar? presion ( s ) para jugar o ( n ) para terminar: ";
   cin >> jugar;
   cout << endl << endl;
   adivinar = 0;
   tentativo = 2;
   aux = k;
}

porcentaje = (aux * aciertos)/100;
medio_intentos = intentos / aciertos;

cout << "\n\n----------------------------------------------------------------------------\n\n";
cout << "\n\nNumero total de juegos realizados: "<< aux << endl;
cout << "\n\nNumero total de aciertos realizados: "<< aciertos << endl;
cout << "\n\nEl porcentaje de juegos acertados con respecto a los juegos es: "
     << aciertos << " %" << endl;
cout << "\n\nEl numero medio de intentos con respecto a los aciertos es: " 
     << medio_intentos << endl;

	system ("pause");

	return (0);
} 
