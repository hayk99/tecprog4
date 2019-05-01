/*
 * AUTORES: HAYK KOCHARYAN(757715) - JAVIER SALAMERO SANZ (756868)
 * PRÁCTICA 4 - TEONOLOGÍA DE LA PROGRAMACIÓN
 * FECHA ÚLTIMA MODIFICACÍÓN: 27 abril 2019
 */

#include "practica4.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	Camion camion(9);

	Contenedor<Generico> contenedor_generico(4);
	Contenedor<Generico> contenedor_generico2(2);
	Contenedor<Toxico>   contenedor_toxico(3);
	Contenedor<SerVivo>  contenedor_servivo(6.5);

	Producto producto_rand(1, "producto random");
	Toxico caca(2, "Caca de vaca");
	SerVivo bebes(6.5, "Bebes");
	//contenedor_generico.guardar(bebes); // no compilar
	if(contenedor_servivo.guardar(bebes)){
		cout << "guardado" << bebes.devolverNombre() << " " << bebes.devolverVolumen() << endl;
	}
	else cout << "no guardado" << endl;
	//camion.guardar(caca); // no
	cout << camion.devolverCapacidad() << endl;
	if(contenedor_generico.guardar(contenedor_generico2)){
		cout << "guardado" << contenedor_generico2.devolverVolumen() << endl;
	}
	else cout << "no guardado" << endl;
		if(contenedor_generico.guardar(contenedor_generico2)){
		cout << "guardado " << contenedor_generico2.devolverVolumen() << endl;
	}
	else cout << "no guardado" << endl;

	if(contenedor_generico.guardar(contenedor_generico2)){
		cout << "guardado " << contenedor_generico2.devolverVolumen() << endl;
	}
	else cout << "no guardado" << endl;
	contenedor_toxico.guardar(contenedor_generico2);



}

