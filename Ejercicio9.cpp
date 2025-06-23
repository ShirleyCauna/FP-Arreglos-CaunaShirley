#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Tamaño del vector: ";
	cin >> n;

	int Num[n];

	cout << "Coloca los datos:" << endl;
	for(int i = 0; i < n; i++){
		cout << "Dato " << i << ": ";
		cin >> Num[i];
	}

	return 0;
}