#pragma once
#include <string>
#include <iostream>
using namespace std;
class prueba
{
public:
	prueba(string, string);
	void setNomCourse(string);
	string getNomCourse();

	void setNomProf(string);
	string getNomProf();

	void showMessaje();
private:
	string nomCourse;
	string nomProf;
};

