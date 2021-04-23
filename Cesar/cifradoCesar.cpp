#include <iostream>
#include <string>
#include "Cesar.h"

using namespace std;

int main()
{
	CifradoCesar cesar;
	int opcion = 0;

	cout << "INGRESE LA OPCION ---1--- PARA CIFRAR Y LA OPCION ---2--- PARA DESCIFRAR" << endl;
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		cesar.cifrarMensaje();
		break;
	case 2:
		cesar.descifrarMensaje();
		break;
	default:
		break;
	}
}