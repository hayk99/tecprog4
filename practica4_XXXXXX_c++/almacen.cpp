/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */
#include "almacen.h"

Almacen::Almacen(const double capacidad) : Almacen::capacidad(capacidad) {}

Almacen::~Almacen() {}

double Almacen::devolverCapacidad(const double capacidad){
	return capacidad;
}

bool Almacen::guardar(const T& elemento){
	if(elemento.devolverVolumen() < capacidad){
		almacenado.push_back(elemento);
		capacidad -= elemento.devolverVolumen();
		return true;
	}
	else return false;
}


