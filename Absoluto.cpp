// Nombre: Luis Angel Melchor Cancino
// Programa que cumple con la funcion f(x) = |x| (51 del libro)

#include <iostream>
using namespace std;
int main()
{
    int numero;
    int absoluto;
    cout << "Introduzca el numero:  ";
    cin >> numero;
    absoluto = abs(numero);
    cout << "El numero absoluto de " << numero << " es " << absoluto;
}