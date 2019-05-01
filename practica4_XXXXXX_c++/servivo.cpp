/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */
#include "servivo.h"

SerVivo::SerVivo(const double volumen, const string& nombre) : Contenido(volumen), nombre(nombre) {}

SerVivo::~SerVivo() {}

string SerVivo::devolverNombre () const {
	return nombre;
}