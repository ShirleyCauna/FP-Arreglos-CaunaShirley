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
	double promedio;

	cout << "Ingrese las ventas de cada mes del año 2020:" << endl;

	for(int i = 0; i < totalMeses; i++){
		cout << "Ventas de " << nombreMes[i] << ": ";
		cin >> ventasMensuales[i];
		acumulado += ventasMensuales[i];
	}

	promedio = acumulado / totalMeses;
	cout << "\nPromedio mensual de ventas: " << promedio << endl;

	int conteoMinimo = 0, conteoRegular = 0, conteoExcelente = 0;
	double porcentaje;

	cout << "\nMeses con desempeño excelente:" << endl;

	for(int i = 0; i < totalMeses; i++){
		porcentaje = (ventasMensuales[i] / promedio) * 100;

		if(porcentaje < 40.0){
			conteoMinimo++;
		} else if(porcentaje <= 75.0){
			conteoRegular++;
		} else {
			conteoExcelente++;
			cout << "- " << nombreMes[i] << endl;
		}
	}

	cout << "\nPorcentaje de meses segun el nivel de ventas:" << endl;
	cout << "Nivel minimo: " << (conteoMinimo * 100.0 / totalMeses) << "%" << endl;
	cout << "Nivel regular: " << (conteoRegular * 100.0 / totalMeses) << "%" << endl;
	cout << "Nivel excelente: " << (conteoExcelente * 100.0 / totalMeses) << "%" << endl;

	return 0;
}