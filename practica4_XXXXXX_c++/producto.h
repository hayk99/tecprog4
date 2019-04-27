/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */
#pragma once
// cnstructor Producto(double volumen, const std::string&nombre)

#include "almacen.h"

class Producto :public Almacen<T>{
private:
	string nombre;
public:
	Producto(double tam, const string& nombre);
	~Producto();

	string devolverNombre(const T& elemento);
};