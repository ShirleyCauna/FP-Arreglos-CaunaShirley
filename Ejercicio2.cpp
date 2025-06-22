#include <iostream>
using namespace std;

int main() {
    char texto[100];
    int i = 0;

    cout << "Ingresa un texto (máx 100 caracteres, termina con Enter): ";
    cin.getline(texto, 100);  // lee toda la línea (sí se usa getline de cin, pero es básica)

    while (texto[i] != '\0') {
        if (texto[i] == ' ') {
            cout << endl;
        } else {
            cout << texto[i];
        }
        i++;
    }

    return 0;
}
