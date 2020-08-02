#include "pruba.h"
	
FrecuenciCardiaca::FrecuenciCardiaca(string nom, string ape, int _dia, int _mes, int _a�o, float _latidoPorMinuto) {
	setNom(nom);
	setApe(ape);
	setFecha(_dia, _mes, _a�o);
	EstablecerEdad(_a�o);
	latidoPorMinuto = _latidoPorMinuto;
}
void FrecuenciCardiaca::setNom(string nom) {
	nombre = nom;
}
string FrecuenciCardiaca::getNom() {
	return nombre;
}

void FrecuenciCardiaca::setApe(string ape) {
	apellido = ape;
}

string FrecuenciCardiaca::getApe() {
	return  apellido;
}

void FrecuenciCardiaca::setFecha(int _dia, int _mes, int _a�o) {
	dia = _dia;
	mes = _mes;
	a�o = _a�o;
}
int FrecuenciCardiaca::getFecha() {
	return dia, mes, a�o;
}

void  FrecuenciCardiaca::EstablecerEdad(int _edad) {
	edad = 2020 - _edad;
}
int FrecuenciCardiaca::obtenerEdad() {
	return edad;
}


int FrecuenciCardiaca::btenerFrecuenciaCardiacaMaxima() {
	FCM = 220 - obtenerEdad();
	return FCM;
}
void FrecuenciCardiaca::obtenerFrecuenciaCardiacaEsperada() {
	float a, b;
	a = (50 * btenerFrecuenciaCardiacaMaxima()/100);
	b = (85 * btenerFrecuenciaCardiacaMaxima() / 100);
	if (latidoPorMinuto >= a && latidoPorMinuto <= b) {
		cout << "Estas bien sigue asi !!!!" << endl;
	}
	else {
		cout << "Mejor cuidate" << endl;
	}
}