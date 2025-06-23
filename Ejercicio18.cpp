// Dada una frase comprobar si el balanceo de los parentesis es correcto. Es decir, “(ccc(ccc)cc((ccc(c))))” es correcto, pero “)ccc(ccc)cc((ccc(c)))(“ no lo es, aunque tenga el mismo numero de parentesis abiertos que cerrados.

#include <iostream>
using namespace std;

int main(){
    char frase[100];
    int contador = 0;
    bool correcto = true;

    cout << "Escribe una frase con parentesis: ";
    cin.getline(frase, 100);

    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == '('){
            contador++;
        }
        if(frase[i] == ')'){
            contador--;
            if(contador < 0){
                correcto = false;
                break;
            }
        }
    }

    if(contador != 0){
        correcto = false;
    }

    if(correcto){
        cout << "Los parentesis estan balanceados." << endl;
    } else {
        cout << "Los parentesis NO estan bien balanceados." << endl;
    }

    return 0;
}