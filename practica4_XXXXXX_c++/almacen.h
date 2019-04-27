/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */
#pragma once
#include <string>
#include <iostream>
#include <list>

using namespace std;


template<typename T>
class Almacen {
protected:
	double tam;
public:
	Almacen();
	~Almacen();
	double tamanyo();

	virtual bool guardar(const T& elemento) = 0; 
};