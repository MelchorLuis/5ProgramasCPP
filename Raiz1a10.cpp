// Nombre: Luis Angel Melchor Cancino 
// Programa que evalua valores entre 1 y 10 en la funcion y = raizcuadrada(x) (Problema 52 del libro)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numero;
    double raiz;
	cout << "Ingrese un numero entre 1 y 10: " << endl;
	cin >> numero;
	if(numero >= 1 && numero <= 10)
	{
	    raiz = sqrt(numero);
	    cout << "La raiz es: " << raiz;
	}
	else
	{
	    cout << "Numero fuera de los limites";
	}
}