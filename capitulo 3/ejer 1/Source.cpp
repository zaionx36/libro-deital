
#include "pruba.h"

using namespace std;

int main() {
	string nom1, nom2;
	cout << "Escriba el nombre del curso: ";
	getline(cin, nom1);
	cout << "Escriba el nombre del profesor: ";
	getline(cin, nom2);
	
	prueba llamar(nom1,nom2);
	llamar.showMessaje();

	return 0;
}