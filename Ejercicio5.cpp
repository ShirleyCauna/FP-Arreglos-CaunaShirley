//Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones.

#include <iostream>
using namespace std;

int main(){
    const int MAX_ELEMENTOS = 100;
    int arregloNumeros[MAX_ELEMENTOS];
    int cantidadElementos;

    cout << "Ingrese la cantidad total de elementos que desea procesar: ";
    cin >> cantidadElementos;

    for (int indice = 0; indice < cantidadElementos; indice++) {
        cout << "Ingrese el valor del elemento #" << indice + 1 << ": ";
        cin >> arregloNumeros[indice];
    }

    int numeroMayor = arregloNumeros[0];
    int numeroMenor = arregloNumeros[0];
    int repeticionesMayor = 1;
    int repeticionesMenor = 1;

    for (int i = 1; i < cantidadElementos; i++) {
        if (arregloNumeros[i] > numeroMayor) {
            numeroMayor = arregloNumeros[i];
            repeticionesMayor = 1;
        } else if (arregloNumeros[i] == numeroMayor) {
            repeticionesMayor++;
        }

        if (arregloNumeros[i] < numeroMenor) {
            numeroMenor = arregloNumeros[i];
            repeticionesMenor = 1;
        } else if (arregloNumeros[i] == numeroMenor) {
            repeticionesMenor++;
        }
    }

    cout << "\nNúmero mayor encontrado: " << numeroMayor << " (ocurre " << repeticionesMayor << " veces)" << endl;
    cout << "Número menor encontrado: " << numeroMenor << " (ocurre " << repeticionesMenor << " veces)" << endl;

    return 0;
}