// Generar la función mistrcpy(str1,str2) que copia str2 en str1. No usar la funciones de String.h

#include<iostream>
using namespace std;

void mistrcpy(char str1[], char str2[]){
	int i = 0;
	while(str2[i] != '\0'){
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
}

int main() {
	char str1[20];
	char str2[] = "programar en C++"; 


	return 0;
}