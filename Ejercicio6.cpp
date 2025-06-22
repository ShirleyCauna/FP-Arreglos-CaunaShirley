#include <iostream>
using namespace std;

int main() {
    int n, i;
    int vector[100];
    int sumaPar = 0, sumaImpar = 0;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    // Leer los elementos del vector
    for (i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> vector[i];
    }

    // Calcular suma en posiciones pares e impares
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sumaPar += vector[i];
        } else {
            sumaImpar += vector[i];
        }
    }

    // Mostrar resultados
    cout << "Suma de componentes en posiciones pares: " << sumaPar << endl;
    cout << "Suma de componentes en posiciones impares: " << sumaImpar << endl;

    return 0;
}
