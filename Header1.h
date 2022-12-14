#pragma once
#include<iostream>
using namespace std;
class Trabajador
{
private:
	int codigo;
	string nombre;
	string apellido;
	int cantidad;
	float tarifa;
public:
	Trabajador();
	Trabajador(int, string, string, int, float);
	~Trabajador();
	void set_codigo(int);
	void set_nombre(string);
	void set_apellido(string);
	void set_cantidad(int);
	void set_tarifa(float);

	int get_codigo();
	string get_nombre();
	string get_apellido();
	int get_cantidad();
	float get_tarifa();
	float get_sueldo();
	float get_tarifa_extra();
};
Trabajador::Trabajador()
{

}
Trabajador::Trabajador(int codigo, string nombre, string apellido, int cantidad, float tarifa)
{
	this->codigo = codigo;
	this->nombre = nombre;
	this->apellido = apellido;
	this->cantidad = cantidad;
	this->tarifa = tarifa;
}
Trabajador::~Trabajador()
{

}
void Trabajador::set_codigo(int codigo)
{
	this->codigo = codigo;
}
void Trabajador::set_nombre(string nombre)
{
	this->nombre = nombre;
}
void Trabajador::set_apellido(string apellido)
{
	this->apellido = apellido;
}
void Trabajador::set_cantidad(int cantidad)
{
	this->cantidad = cantidad;
}
void Trabajador::set_tarifa(float tarifa)
{
	this->tarifa = tarifa;
}
int Trabajador::get_codigo()
{
	return this->codigo;
}
string Trabajador::get_nombre()
{
	return this->nombre;
}
string Trabajador::get_apellido()
{
	return this->apellido;
}
int Trabajador::get_cantidad()
{
	return this->cantidad;
}
float Trabajador::get_tarifa()
{
	return this->tarifa;
}

float Trabajador::get_tarifa_extra()
{
	float doble_sueldo = 0;
	float triple_sueldo = 0;
	float sueldo = 0;
	if (cantidad > 40&&cantidad<=48)
	{
		doble_sueldo = cantidad - 40;
		return sueldo = 40 * this->tarifa + (doble_sueldo * this->tarifa * 2);
	}
	else if (cantidad > 48)
	{
		triple_sueldo = cantidad - 48;
		return sueldo = 40 * this->tarifa + (8 * this->tarifa * 2) + (triple_sueldo * this->tarifa * 3);
	}
	else
	{
		sueldo = this->cantidad * this->tarifa;
		return sueldo;
	}
}