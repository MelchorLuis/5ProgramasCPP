// Nombre: Luis Angel Melchor Cancino
// Programa que muestra la serie fibonacci y suma todos los numeros que sean pares hasta el numero 4 Millones(No es del libro, es uno de los que hemos estado haciendo con mi equipo para practicar para un concurso "Coding cup" que es el dia 6 de Noviembre)
// Convocatoria: http://www.itsur.edu.mx/documentos_publicados/coordinacion_sistemas/2020/Convocatoria_Coding_Cup_TECNM_2020.pdf
#include <iostream>
using namespace std;

int main() {
	int x=0,y=1,sum=0;
	int aux=0;
	do
	{
	    aux = x;
	    x = y;
	    y = x + aux;
	    cout << "Serie: " << x << endl;
	    if((x % 2 == 0))
	    {
	        sum = sum + x;
	    }
	}while(y < 4000000);
	cout << "La suma es: " << sum << endl;
}