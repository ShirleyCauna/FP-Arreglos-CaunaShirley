#include <iostream>
using namespace std;

int main() {
    char texto[100];
    int i = 0;

    cout << "Ingresa un texto (m�x 100 caracteres, termina con Enter): ";
    cin.getline(texto, 100);  // lee toda la l�nea (s� se usa getline de cin, pero es b�sica)

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
