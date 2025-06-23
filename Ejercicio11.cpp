// Calcular la suma de elementos positivos y negativos en un arreglo. 

#include<iostream>
using namespace std;

int main(){
	// Declaracion de variables necesarias
	int n, suma = 0, sumaN = 0, sumaP = 0;

	cout << "Ingrese la cantidad de numeros que desea usar: " << endl;
	cin >> n;

	int arr[100]; // Se considera que n no supera 100

	// Ingreso de los datos al arreglo
	cout << "Ahora digite los valores uno por uno:" << endl;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		suma = suma + arr[i];

		if(arr[i] < 0){
			sumaN = sumaN + arr[i];
		} else {
			sumaP = sumaP + arr[i];
		}
	}

	// Resultados mostrados en pantalla
	cout << "Suma total de todos los elementos: " << suma << endl;
	cout << "Suma de los numeros positivos: " << sumaP << endl;
	cout << "Suma de los numeros negativos: " << sumaN << endl;

	return 0;
}
