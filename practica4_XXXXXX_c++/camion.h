 /*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */

#pragma once

#include "almacen.h"
#include "generico.h"

using namespace std;

class Camion : public Almacen<Generico> {
public:
	Camion(const double capacidad);
	~Camion();
};
