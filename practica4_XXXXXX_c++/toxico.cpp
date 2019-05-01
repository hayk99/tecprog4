/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */

#include "toxico.h"

Toxico::Toxico(const double volumen, const string& nombre) : Contenido(volumen), nombre(nombre) {}

Toxico::~Toxico() {}

string Toxico::devolverNombre () const {
	return nombre;
}