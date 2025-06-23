#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Ingrese la cantidad de elementos: ";
	cin >> n;

	int inver[20]; // Vector fijo de tamaño 20

	cout << "Ingrese los elementos del arreglo: " << endl;

	for (int i = 0; i < n; i++){
		cout << "Vector #" << i + 1 << ": ";
		cin >> inver[i];
	}

	// Hasta aquí solo se ingresan los datos

	return 0;
}