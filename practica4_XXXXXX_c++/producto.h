/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */

#pragma once

#include "generico.h"

using namespace std;

class Producto : public Generico{
private:
	const string nombre;
public:
	Producto(const double volumen, const string& nombre);
	~Producto();
	string devolverNombre() const;
};