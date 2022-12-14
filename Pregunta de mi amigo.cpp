#include <iostream>
#include "Header1.h"
using namespace std;
int main()
{
	int codigo;
	string nombre;
	string apellido;
	int cantidad;
	float tarifa;
	cout << "Ingrese codigo:";
	cin >> codigo;
	cout << "Ingrese nombre:";
	cin >> nombre;
	cout << "Ingrese apellido:";
	cin >> apellido;
	cout << "Ingrese cantidad de horas:";
	cin >> cantidad;
	cout << "Ingrese la tarifa x hora:";
	cin >> tarifa;

	Trabajador objTrab(codigo, nombre, apellido, cantidad, tarifa);
	cout << "Codigo:" << objTrab.get_codigo();
	cout << "Nombre:" << objTrab.get_nombre();
	cout << "Apellido:" << objTrab.get_apellido();
	cout << "Cantidad de horas:" << objTrab.get_cantidad();
	cout << "Tarifa x Hora:" << objTrab.get_tarifa();
	cout << "El sueldo es:" << objTrab.get_tarifa_extra();

}
