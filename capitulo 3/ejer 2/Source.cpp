#include "pruba.h"

using namespace std;

int main() {
	int saldo,retirar;
	cout << "Digite el saldo: ";
	cin >> saldo;
	cout << endl;
	account llamar(saldo);

	cout << "Desea retirar el saldo: ";
	cin >> retirar;
	cout << endl;
	llamar.cargar(retirar);
	cout << endl;
	cout << "El sado actual que tienes es: " << llamar.getSaldo();

	return 0;
}