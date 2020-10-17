// Nombre: Luis Angel Melchor Cancino
// Programa suma los multiplos del 1 al 5 hasta el numero 1000 (No es del libro, es uno de los que hemos estado haciendo con mi equipo para practicar para un concurso "Coding cup" que es el dia 6 de Noviembre)
// Convocatoria: http://www.itsur.edu.mx/documentos_publicados/coordinacion_sistemas/2020/Convocatoria_Coding_Cup_TECNM_2020.pdf

#include <iostream>
using namespace std;

int main() {
	int sum=0;
	for(int i=0;i<1000;i++)
	{
	    if((i % 3 == 0) || (i % 5 == 0))
	    {
	        sum = sum + i;
	    }
	}
	cout << sum;
}