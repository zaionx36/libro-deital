#include "pruba.h"

using namespace std;

int main() {
	string num = "Este es el numero de oiezas\n";
	string des = "Este es la descripcion\n";
	int can = 10;
	int pre = -8;

	Factura llamar(num,des,can,pre);
	cout << llamar.getNumPieza();
	cout << llamar.getDescrip();
	cout << endl;
	cout << llamar.getCantidad();
	cout << endl;
	cout << llamar.getPrecio();
	cout << endl << endl;
	cout << llamar.obtenerMontoFactura();
	return 0;
}