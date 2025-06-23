// Escriba una funcion que dado el nombre completo de una persona y un apellido, compruebe si el apellido pertenece a esa persona.

#include <iostream>
#include <cstring>
using namespace std;

// Función aun no implementada
bool pertenece(char nombre[], char apellido[]) {
    // Falta la logica de verificación
    return false;
}

int main() {
    char nombreCompleto[100];
    char apellidoBuscado[30];

    cout << "Ingresa el nombre completo de la persona: ";
    cin.getline(nombreCompleto, 100);

    cout << "Ingresa el apellido a verificar: ";
    cin.getline(apellidoBuscado, 30);

    return 0;
}