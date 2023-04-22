#include <iostream>

static float monto_cliente;

using namespace std;

class Divisa {
public:
	double nomtoDivisa;
	string descripcionDivisa;
};

int main()
{
	//Divisa en Quetzales
	Divisa divisas[12] = {
		{200,"BILLETE DE Q. 200.00"},
		{100,"BILLETE DE Q. 100.00"},
		{50,"BILLETE DE Q. 50.00"},
		{20,"BILLETE DE Q. 20.00"},
		{10,"BILLETE DE Q. 10.00"},
		{5,"BILLETE DE Q. 5.00"},
		{1,"MONEDA DE Q. 1.00"},
		{0.5,"MONEDA DE Q. 0.50c"},
		{0.25,"MONEDA DE Q. 0.25c"},
		{0.10,"MONEDA DE Q. 0.10c"},
		{0.05,"MONEDA DE Q. 0.05c"},
		{0.01,"MONEDA DE Q. 0.01c"}
	};

	cout << "[INFO] CALCULADORA DE BILLETES" << endl;
	cout << "[INFO] INGRESA EL MONTO PARA CALCULAR LOS BILLETES NECESARIOS" << endl;
	cout << ">> ";
	cin >> monto_cliente;

	cout << "[INFO] CALCULADORA DE BILLETES " << monto_cliente << "\n" << endl;

	//Calculo de billetes
	for (Divisa divisa : divisas)
	{
		if (divisa.nomtoDivisa <= monto_cliente)
		{
			int covertura = monto_cliente / divisa.nomtoDivisa;
			monto_cliente = monto_cliente - (covertura * divisa.nomtoDivisa);
			cout << covertura << " | " << divisa.descripcionDivisa << endl;
		}
	}
	cout << "\n[INFO] PROCESO TERMINADO" << endl;
}