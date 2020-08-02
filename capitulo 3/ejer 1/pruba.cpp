#include "pruba.h"

prueba::prueba(string course, string prof) {
	setNomCourse(course);
	setNomProf(prof);
}

void prueba::setNomCourse(string nombre) {
	//cout << "Comprobamos que el string que degitaste es menor o igual a 25 caracteres" << endl;
	if (nombre.size() < 25) {
		//cout << "Si cumple" << endl;
		nomCourse = nombre;
	}
	else {
		//cout << "No cumple" << endl;
		nomCourse = nombre.substr(0, 24);
		//cerr << "Como la cadena es muy larga se interumpe el programa ADIOS";
	}
}

string prueba::getNomCourse() {
	return nomCourse;
}

void prueba::setNomProf(string nombre) {
	//cout << "Comprobamos que el string que degitaste es menor o igual a 25 caracteres" << endl;
	if (nombre.size() < 25) {
		//cout << "Si cumple" << endl;
		nomProf = nombre;
	}
	else {
		//cout << "No cumple" << endl;
		nomProf = nombre.substr(0, 24);
		//cerr << "Como la cadena es muy larga se interumpe el programa ADIOS";
	}
}

string prueba::getNomProf() {
	return nomProf;
}

void prueba::showMessaje() {
	cout << "El nombre del curso: " << getNomCourse() << endl;
	cout << "El nombre del profesor: " << getNomProf() << endl;
}