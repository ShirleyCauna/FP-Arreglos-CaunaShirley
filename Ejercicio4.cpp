#include <iostream>
#include <cstring> // Para strcmp y strcpy
using namespace std;

int main() {
    int n;
    char nombres[50][30]; // Máximo 50 nombres, cada uno de hasta 29 letras

    cout << "Ingrese la cantidad de nombres: ";
    cin >> n;
    cin.ignore(); // Limpiar el buffer del Enter

    // Leer los nombres
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre " << i + 1 << ": ";
        cin.getline(nombres[i], 30);
    }

    // Ordenamiento tipo burbuja alfabeticamente
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(nombres[j], nombres[j + 1]) > 0) {
                char aux[30];
                strcpy(aux, nombres[j]);
                strcpy(nombres[j], nombres[j + 1]);
                strcpy(nombres[j + 1], aux);
            }
        }
    }

    // Mostrar los nombres ordenados
    cout << "\nNombres ordenados alfabeticamente:\n";
    for (int i = 0; i < n; i++) {
        cout << nombres[i] << endl;
    }

    return 0;
}
