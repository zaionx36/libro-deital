#include <string>
#include <iostream>

using namespace std;

class Factura {
public:
	Factura(string, string, int, int);
	void setNumPieza(string);
	string getNumPieza();

	void setDescrip(string);
	string getDescrip();

	void setCantidad(int);
	int getCantidad();

	void setPrecio(int);
	int getPrecio();

	int obtenerMontoFactura();
private:
	string numPieza;
	string descrip;
	int cantidad;
	int precio;
};