//Contar la ocurrencia de una letra especifica en una cadena de entrada.

#include <iostream>
using namespace std;

int main(){
    char palabra[30];
    char letra[2];
    int contador = 0;

    cout << "Ingrese la palabra: ";
    cin.getline(palabra, 30);

    cout << "Indique qué letra deseas contar: ";
    cin >> letra;

    for (int i = 0; palabra[i] != '\0'; i++) {
        if (palabra[i] == letra[0]) {
            contador++;
        }
    }

    cout << "La letra '" << letra[0] << "' aparece " << contador << " veces." << endl;
    return 0;
}
