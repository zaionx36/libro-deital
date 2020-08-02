#include "pruba.h"
	
account::account(int saldo) {
	setSaldo(saldo);
}

void account::setSaldo(int saldo) {
	if (saldo >= 0) {
		saldoCuenta = saldo;
	}
	else {
		saldoCuenta = 0;
		cerr << "Salto de cuenta invalido se puso por defecto el valor de \"" << saldoCuenta << "\"" << endl;
	}
}

void account::cargar(int retirar) {
	if (saldoCuenta - retirar >= 0) {
		saldoCuenta = saldoCuenta - retirar;
	}
	else {
		cerr << "El monto a cargar excede el saldo de la cuenta";
	}
}

int account::getSaldo() {
	return saldoCuenta;
}