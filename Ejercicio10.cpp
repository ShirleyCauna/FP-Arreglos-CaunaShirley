// Generar 30 numeros aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadisticas de tendencia central media, mediana y moda.

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int numeros[30];

    for(int i = 0; i < 30; i++){
        numeros[i] = 100 + rand() % 901; // entre 100 y 1000
        cout << numeros[i] << " ";
    }

    cout << endl;

    // Falta calcular media, mediana y moda

    return 0;
}
