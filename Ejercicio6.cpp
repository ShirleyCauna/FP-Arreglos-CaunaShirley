#include <iostream>
using namespace std;

int main() {
    int n, i;
    int vector[100];

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    // Leer los elementos del vector
    for (i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> vector[i];
    }

    return 0;
}