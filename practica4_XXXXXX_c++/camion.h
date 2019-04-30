 /*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */
#pragma once
#include "almacen.h"
//recibe en el constructor tamaño de camion

class Camion : public Almacen {
public:
	Camion(const double capacidad);
	~Camion();
};
