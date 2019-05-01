/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */

#pragma once

#include "contenido.h"

using namespace std;

class Generico : public Contenido{
public:
	Generico(const double volumen);
	~Generico();
};