/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */
#pragma once
#include <string>
#include <iostream>
#include <list>
#include  "contenido.h"

using namespace std;

class Almacen {
protected:
	double capacidad;
	list <Contenido> almacenado;
public:
	Almacen(const double capacidad);
	~Almacen();
	double devolverCapacidad();
	bool guardar(const Contenido& elemento); 
};