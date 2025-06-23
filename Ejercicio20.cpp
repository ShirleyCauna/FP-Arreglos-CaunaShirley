// Solicite al contador del almacén La Milagrosa el monto de las ventas mensuales de todo el año 2020. Luego, el contador desea obtener los siguientes resultados...

#include<iostream>
using namespace std;

int main(){
	int totalMeses = 12;
	string nombreMes[totalMeses] = {
		"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
		"Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
	};
	double ventasMensuales[12];
	double acumulado = 0;

	cout << "Ingrese las ventas de cada mes del ano 2020:" << endl;

	for(int i = 0; i < totalMeses; i++){
		cout << "Ventas de " << nombreMes[i] << ": ";
		cin >> ventasMensuales[i];
		acumulado += ventasMensuales[i];
	}


	return 0;
}