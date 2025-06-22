#include <iostream>
using namespace std;

int main(){
	char oracion[100];
	
	cout << "Ingrese la oracion: ";
	cin.getline(oracion,100);
	
	oracion[0]=toupper(oracion[0]);
	
	for(int i = 1; i<=99;i++){
		if (oracion[i]==' '){
			oracion[i+1]=toupper(oracion[i+1]);
		}
	}
	cout<<oracion;
	
	return 0;
}
