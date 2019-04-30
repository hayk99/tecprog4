/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */
#pragma once
#include "almacen.h"
#include "contenido.h"
//constructor recibe tamaño
using namespace std;

template <typename T>
class Contenedor : public Almacen<T>, public Generico{
public:
	Contenedor(const double capacidad);
	~Contenedor();
};