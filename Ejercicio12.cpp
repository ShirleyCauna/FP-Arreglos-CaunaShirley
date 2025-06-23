// Implementar una funcion que reciba un vector, su longitud y retorne true si el mismo se encuentra ordenado, false en caso contrario.

#include <iostream>
using namespace std;

int main(){
	int n;
	int vec[100];

	cout << "Cantidad de elementos: ";
	cin >> n;

	cout << "Ingresa los elementos:" << endl;
	for(int i = 0; i < n; i++){
		cin >> vec[i];
	}

	return 0;
}