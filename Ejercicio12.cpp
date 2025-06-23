// Implementar una funcion que reciba un vector, su longitud y retorne true si el mismo se encuentra ordenado, false en caso contrario.

#include <iostream>
using namespace std;

// Funcion que verifica si el vector esta ordenado
bool ordenado(int v[], int tam){
	for(int i = 0; i < tam - 1; i++){
		if(v[i] > v[i + 1]){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	int vec[100];

	cout << "Cantidad de elementos: ";
	cin >> n;

	cout << "Ingresa los elementos:" << endl;
	for(int i = 0; i < n; i++){
		cin >> vec[i];
	}

	if(ordenado(vec, n)){
		cout << "El vector esta ordenado." << endl;
	} else {
		cout << "El vector no esta ordenado." << endl;
	}

	return 0;
}