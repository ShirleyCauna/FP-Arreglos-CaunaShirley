#include <iostream>
using namespace std;

int main(){
    int numero[10];

    cout << "Ingrese los 10 dígitos del número:" << endl;

    for(int i = 0; i < 10; i++){
        cout << "Dígito " << i + 1 << ": ";
        cin >> numero[i];
    }

    return 0;
}