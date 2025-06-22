#include <iostream>
using namespace std;

int main(){
	char oracion[100];
	
	cout << "Ingrese la oracion (use _ en lugar de espacio): ";
	cin >> oracion;
	
	oracion[0]=toupper(oracion[0]);
	
	for(int i = 1; i <= 99; i++){
		if (oracion[i]=='_'){
			oracion[i]=' '; // convertir _ a espacio
			oracion[i+1]=toupper(oracion[i+1]);
		}
	}
	cout << oracion;
	
	return 0;
}