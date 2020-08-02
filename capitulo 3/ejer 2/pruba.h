#include <string>
#include <iostream>

using namespace std;
class account	//cuenta
{
public:
	account(int);
	void setSaldo(int);
	int getSaldo();

	void cargar(int);
private:
	int saldoCuenta;
};

