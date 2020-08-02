#include <string>
#include <iostream>

using namespace std;

class FrecuenciCardiaca {
public:
	FrecuenciCardiaca(string, string, int, int, int, float);
	void setNom(string);
	string getNom();

	void setApe(string);
	string getApe();

	void setFecha(int, int, int);
	int getFecha();

	void EstablecerEdad(int);
	int obtenerEdad();
	int btenerFrecuenciaCardiacaMaxima();
	void obtenerFrecuenciaCardiacaEsperada();
private:
	string nombre, apellido;
	int año, mes, dia;
	int edad, FCM;
	float latidoPorMinuto;
};