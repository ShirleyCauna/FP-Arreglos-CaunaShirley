// Invertir un vector e imprimirlo.

#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Cantidad de elementos a usar: ";
	cin >> n;

	int inver[20];

	cout << "Ingresa los elementos del arreglo uno por uno:" << endl;
	for (int i = 0; i < n; i++){
		cout << "- Elemento #" << i + 1 << ": ";
		cin >> inver[i];
	}

	cout << "\nEl vector invertido es:\n";
	for (int i = n - 1; i >= 0; i--){
		cout << inver[i] << " ";
	}

	cout << endl;
	return 0;
}
