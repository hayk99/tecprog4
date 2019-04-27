/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */
#pragma once
#include "almacen.h"
//constructor recibe tamaño

template<typename T>

class Contenedor :public Almacen<T>{
	list < Almacen <T> > contenido;
public:
	Contenedor(const double tam);
	~Contenedor();

	bool guardar(const T& elemento) = 0; 
};