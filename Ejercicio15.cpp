// Generar la funcion mistrcmp(str1,str2) que compara dos cadenas y retorna los resultados 0 si las cadenas son iguales, 1 si la cadena str1 >str2, -1 si la cadena str2>str1. No usar las funciones de String.h

#include <iostream>
using namespace std;

// Funcion para comparar dos cadenas sin usar string.h
int mistrcmp(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }

    // Si una cadena es mas larga que la otra
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0; // Son iguales
    } else if (str1[i] == '\0') {
        return -1; // str2 es mayor
    } else {
        return 1; // str1 es mayor
    }
}

int main() {
    char str1[50];
    char str2[50];

    cout << "Ingrese la primera cadena: ";
    cin >> str1;

    cout << "Ingrese la segunda cadena: ";
    cin >> str2;

    int resultado = mistrcmp(str1, str2);

    if (resultado == 0) {
        cout << "Las cadenas son iguales." << endl;
    } else if (resultado == 1) {
        cout << "La primera cadena es mayor." << endl;
    } else {
        cout << "La segunda cadena es mayor." << endl;
    }

    return 0;
}