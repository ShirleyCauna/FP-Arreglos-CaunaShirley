#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main(){
    char palabra[30];
    char letra[2];

    cout << "Ingrese la palabra: ";
    cin.getline(palabra, 30);

    cout << "Indique qué letra deseas contar: ";
    cin >> letra;

    return 0;
}
