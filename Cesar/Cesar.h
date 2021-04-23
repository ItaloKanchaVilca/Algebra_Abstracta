#pragma once
#include <string>

class CifradoCesar
{
public:

	CifradoCesar();
	void cifrarMensaje();
	void descifrarMensaje();

private:

	std::string mensaje, mensajeCifrado, abecedario;
	int auxiliar, clave;
};