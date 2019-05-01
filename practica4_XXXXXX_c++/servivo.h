/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */
#pragma once

#include "contenido.h"

using namespace std;

class SerVivo : public Contenido{
private:
	const string nombre;
public:
	SerVivo(double volumen, const string& nombre);
	~SerVivo();
	string devolverNombre() const;
};