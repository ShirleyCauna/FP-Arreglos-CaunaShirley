#include <iostream>
using namespace std;

int main(){
	char palabra[30];
	char letra[2];
	int a = 0;
	cout << "Ingrese la palabra: ";
	cin.getline(palabra,30);
	cout<<"Indique que letra deseas saber su recurrencia: ";
	cin >> letra;
	
	for (int i=0;i<=30;i++){
		if (palabra[i]==letra[0]){
			a = a + 1;
		}
	}
	cout<<"La recurrencia de la letra es : "<<a;
	return 0;
}