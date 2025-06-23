// Generar 30 numeros aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadisticas de tendencia central media, mediana y moda.

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int numeros[30];
    int i, j;
    int suma = 0;

    for(i = 0; i < 30; i++){
        numeros[i] = 100 + rand() % 901;
        cout << numeros[i] << " ";
        suma = suma + numeros[i];
    }

    cout << endl;

    // MEDIA
    cout << "Media: " << suma / 30 << endl;

    // ORDENAR PARA LA MEDIANA
    int aux;
    for(i = 0; i < 30; i++){
        for(j = i + 1; j < 30; j++){
            if(numeros[i] > numeros[j]){
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    // MEDIANA: promedio del 15° y 16° número (indices 14 y 15)
    int mediana = (numeros[14] + numeros[15]) / 2;
    cout << "Mediana: " << mediana << endl;

    // MODA
    int moda = numeros[0];
    int max = 0;

    for(i = 0; i < 30; i++){
        int cont = 0;
        for(j = 0; j < 30; j++){
            if(numeros[i] == numeros[j]){
                cont = cont + 1;
            }
        }
        if(cont > max){
            max = cont;
            moda = numeros[i];
        }
    }

    if(max > 1){
        cout << "Moda: " << moda << endl;
    } else {
        cout << "Moda: no hay" << endl;
    }

    return 0;
}
