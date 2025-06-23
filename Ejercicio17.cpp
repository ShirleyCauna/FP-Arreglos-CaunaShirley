// Escriba una funcion que dado el nombre completo de una persona y un apellido, compruebe si el apellido pertenece a esa persona.

#include <iostream>
#include <cstring>
using namespace std;

// Funcion que verifica si el apellido esta dentro del nombre completo
bool pertenece(char nombre[], char apellido[]) {
    if (strstr(nombre, apellido)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    char nombreCompleto[100];
    char apellidoBuscado[30];

    cout << "Escribe el nombre completo de la persona: ";
    cin.getline(nombreCompleto, 100);

    cout << "Escribe el apellido que deseas buscar: ";
    cin.getline(apellidoBuscado, 30);

    if (pertenece(nombreCompleto, apellidoBuscado)) {
        cout << "Si pertenece a esa persona." << endl;
    } else {
        cout << "No pertenece a esa persona." << endl;
    }

    return 0;
}