// Nombre: Luis Angel Melchor Cancino
// Programa que crea un arbol de n lineas (No es del libro, es uno de los que hemos estado haciendo con mi equipo para practicar para un concurso "Coding cup" que es el dia 6 de Noviembre)
// Convocatoria: http://www.itsur.edu.mx/documentos_publicados/coordinacion_sistemas/2020/Convocatoria_Coding_Cup_TECNM_2020.pdf

#include <iostream>
using namespace std;

int main() {
	int n=0;
	int aux=0;
	cin  >> n;
	for(int i=0;i<n;i++)
	{
	    for(int a=(n-aux);a>1;a--)
	    {
	    cout << ' ';
	    }
	    aux++;
	    for(int j=0;j<aux;j++)
	    {
	        cout << "#";
	    }
	    cout << endl;
	}
}