#include "pruba.h"

using namespace std;

int main() {
	FrecuenciCardiaca llamar("joaquin", "Cutipa", 13, 05, 2001, 117);
	cout << llamar.obtenerEdad() << endl;
	cout << llamar.btenerFrecuenciaCardiacaMaxima() << endl;
	llamar.obtenerFrecuenciaCardiacaEsperada();
	return 0;
}