/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */

#include "contenido.h"

Contenido::Contenido(double volumen) : volumen(volumen) {}

Contenido::~Contenido() {}

double Contenido::devolverVolumen() const{
	return volumen;
}
