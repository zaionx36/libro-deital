#include "pruba.h"
	
Factura::Factura(string Num_P, string Des_P, int Can_P, int Precio) {
	setNumPieza(Num_P);
	setDescrip(Des_P);
	setCantidad(Can_P);
	setPrecio(Precio);
}

void Factura::setNumPieza(string num) {
	numPieza = num;
}
string Factura::getNumPieza() {
	return numPieza;
}

void Factura::setDescrip(string des) {
	descrip = des;
}

string Factura::getDescrip() {
	return descrip;
}

void Factura::setCantidad(int can) {
	if (can >= 0) {
		cantidad = can;
	}
	else {
		cantidad = 0;
	}
}

int Factura::getCantidad() {
	return cantidad;
}

void Factura::setPrecio(int pre) {
	if (pre >= 0) {
		precio = pre;
	}
	else {
		precio = 0;
	}
}

int Factura::getPrecio() {
	return precio;
}

int Factura::obtenerMontoFactura() {
	return precio * cantidad;
}