// Leer una linea de entrada. Descartar todos los simbolos excepto los digitos. Convertir la cadena de digitos en un entero y fijar el valor del entero a la variable n y finalmente sumarle 2 (las funciones atoi y isdigit te pueden ayudar para este proposito) Ejemplo: “En aproximadamente 120 dias llegaremos al ano 2022 y festejaremos” 1202022 -> 1202024

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char texto[100];
    char numeros[100];
    int j = 0;

    cout << "Ingresa una linea con numeros y letras: ";
    cin.getline(texto, 100);

    for(int i = 0; texto[i] != '\0'; i++){
        if(isdigit(texto[i])){
            numeros[j] = texto[i];
            j++;
        }
    }

    numeros[j] = '\0';  

    return 0;
}