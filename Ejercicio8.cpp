// Comprobar si un número de 10 cifras es capicúa usando un vector.

#include <iostream>
using namespace std;

int main(){
    int numero[10];
    bool esCapicua = true;

    cout << "Ingrese los 10 dígitos del número:" << endl;

    for(int i = 0; i < 10; i++){
        cout << "Dígito " << i + 1 << ": ";
        cin >> numero[i];
    }

    // Comparar los dígitos para ver si es capicúa
    for(int i = 0; i < 5; i++){
        if(numero[i] != numero[9 - i]){
            esCapicua = false;
        }
    }

    // Mostrar resultado
    if(esCapicua){
        cout << "El número es capicúa." << endl;
    } else {
        cout << "El número no es capicúa." << endl;
    }

    return 0;
}