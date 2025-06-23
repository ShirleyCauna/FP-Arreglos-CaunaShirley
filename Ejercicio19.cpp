// Escribir un programa que dada una frase, determine si es un palindromo o no. Un palindromo es una frase que, atendiendo solo a sus letras e ignorando los espacios, acentos, signos de puntuacion y tipo de letra (mayuscula o minuscula) expresa lo mismo leida de izquierda a derecha que de derecha a izquierda. “dabale arroz a la zorra el abad”.

#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char frase[100];
    char letras[100];
    int j = 0;

    cout << "Escribe una frase: ";
    cin.getline(frase, 100);

    for(int i = 0; frase[i] != '\0'; i++){
        if(isalpha(frase[i])){
            letras[j] = tolower(frase[i]);
            j++;
        }
    }

    letras[j] = '\0';


    return 0;
}