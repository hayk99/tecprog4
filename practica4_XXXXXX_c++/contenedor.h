/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */
#pragma once

#include "contenedor.h"
#include "almacen.h"
#include "generico.h"
//constructor recibe tamaño
using namespace std;

template <typename T>
class Contenedor : public Almacen<T>, public Generico {
public:
	Contenedor(double capacidad);
	~Contenedor();
};

template <typename T>
Contenedor<T>::Contenedor(double capacidad): Almacen<T>(capacidad), Generico(capacidad){}

template <typename T>
Contenedor<T>::~Contenedor() {}