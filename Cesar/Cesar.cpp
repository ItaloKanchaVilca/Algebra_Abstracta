#include "Cesar.h"
#include <string>
#include <iostream>

using namespace std;

CifradoCesar::CifradoCesar()
{
	mensaje = "";
	mensajeCifrado = "";

	abecedario = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	auxiliar = 0;
	clave = 0;
}

void CifradoCesar::cifrarMensaje()
{
	cout << "INGRESE LA CLAVE: " << endl;
	cin >> clave;

	cout << "INGRESE MENSAJE PARA CIFRAR:" << endl;
	getline(cin.ignore(), mensaje);

	for (int i = 0; i < mensaje.length(); i++)
	{
		auxiliar = abecedario.find(mensaje[i]);
		auxiliar += clave * 2;

		if (auxiliar >= 52)
		{
			auxiliar = auxiliar % 52;
		}
		if (mensaje[i] != ' ')
		{
			mensaje[i] = abecedario[auxiliar];
		}
	}
	cout << "EL MENSAJE CIFRADO ES:" << endl << mensaje;
}

void CifradoCesar::descifrarMensaje()
{
	cout << "INGRESE LA CLAVE: " << endl;
	cin >> clave;

	cout << "INGRESE MENSAJE PARA DESCIFRAR:" << endl;
	getline(cin.ignore(), mensajeCifrado);

	for (int i = 0; i < mensajeCifrado.length(); i++)
	{
		auxiliar = abecedario.find(mensajeCifrado[i]);
		auxiliar -= clave * 2;

		if (auxiliar < 0)
		{
			auxiliar = 52 + auxiliar;
		}
		if (mensajeCifrado[i] != ' ')
		{
			mensajeCifrado[i] = abecedario[auxiliar];
		}
	}
	cout << "EL MENSAJE DEsCIFRADO ES:" << endl << mensajeCifrado << endl;
}