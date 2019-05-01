/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */

#pragma once
#include <string>
#include <iostream>
#include <list>

#include "almacen.h"

using namespace std;

template <typename T>
class Almacen {
private:
	double capacidad;
	list <T> almacenado;
public:
	Almacen(double capacidad);
	~Almacen();
	double devolverCapacidad() const;
	bool guardar(T& elemento); 
};

template <typename T>
Almacen<T>::Almacen(double capacidad) : capacidad(capacidad) {}

template <typename T>
Almacen<T>::~Almacen() {}

template <typename T>
double Almacen<T>::devolverCapacidad() const {
	return capacidad;
}

template <typename T>
bool Almacen<T>::guardar(T& elemento){
	if(elemento.devolverVolumen() <= capacidad){
		almacenado.push_back(elemento);
		capacidad -= elemento.devolverVolumen();
		return true;
	}
	else return false;
}