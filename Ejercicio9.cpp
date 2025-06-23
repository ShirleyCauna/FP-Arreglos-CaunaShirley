#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Tamano del vector: ";
	cin >> n;

	int Num[n];

	cout << "Coloca los datos:" << endl;
	for(int i = 0; i < n; i++){
		cout << "Dato " << i << ": ";
		cin >> Num[i];
	}
	
	// Guardar el �ltimo dato
	int ult = Num[n - 1];

	// Mover los dem�s hacia la derecha
	for(int i = n - 1; i > 0; i--){
		Num[i] = Num[i - 1];
	}

	// El �ltimo va al inicio
	Num[0] = ult;

	cout << "\nVector rotado una posici�n a la derecha:" << endl;
	for(int i = 0; i < n; i++){
		cout << Num[i] << " ";
	}

	cout << endl;

	return 0;
}
