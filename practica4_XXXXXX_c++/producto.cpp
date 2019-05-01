/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */

#include "producto.h"

Producto::Producto(const double volumen, const string& nombre) : Generico(volumen), nombre(nombre) {}

Producto::~Producto() {}

string Producto::devolverNombre() const {
	return nombre;
}