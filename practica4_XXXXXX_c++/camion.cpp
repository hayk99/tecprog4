/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */
#include "almacen.h"

Camion::Camion(const double& tam_): tam(tam_){}
Camion::~Camion() {}

double Camion::guardar(){
	return tam;
}
