#include <iostream>
using namespace std;

int main(){
    char texto[100];

    cout << "Ingresa el texto usando _ en lugar de espacios: ";
    cin >> texto;

    for(int i = 0; texto[i] != '\0'; i++){
        if(texto[i] == '_'){
            cout << endl;
        } else {
            cout << texto[i];
        }
    }

    return 0;
}