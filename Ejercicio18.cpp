// Dada una frase comprobar si el balanceo de los parentesis es correcto. Es decir, “(ccc(ccc)cc((ccc(c))))” es correcto, pero “)ccc(ccc)cc((ccc(c)))(“ no lo es, aunque tenga el mismo numero de parentesis abiertos que cerrados.

#include <iostream>
using namespace std;

int main(){
    char frase[100];

    cout << "Escribe una frase con parentesis: ";
    cin.getline(frase, 100);

    return 0;
}