// Generar la funcion mistrcat(str1,str2) que agrega str2 al final de str1. No usar las funciones de String.h.

#include<iostream>
using namespace std;

void mistrcat(char str1[], char str2[]){
	int i = 0;
	while(str1[i] != '\0'){
		i++;
	}
	int j = 0;
	while(str2[j] != '\0'){
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0'; 
}

int main(){
	char str1[100] = "Bienvenido ";
	char str2[] = "a programacion";

	mistrcat(str1, str2);

	cout << "Cadena resultante: " << str1 << endl;
	cout << "Cadena original: " << str2 << endl;

	return 0;
}