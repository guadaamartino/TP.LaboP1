#include "cDragon.h"

cDragon::cDragon(string Nombre, string Caracteristica, string Tamanio, string Color, bool Estado, int CantVida)
{
	Nombre_dragon = Nombre;
	Caract_dragon = Caracteristica;
	Taman_dragon = Tamanio;
	Color_dragon = Color;
	Estado_dragon = Estado;
	Estrategias = nullptr;
	VidaTotal = CantVida;
}

void cDragon::AltaNombre_dragon(string Habilidad)
{
	Nombre_dragon = Habilidad;
	return;
}

bool cDragon::Domado_dragon()
{
	return this->Estado_dragon;
}

void cDragon::CargarEstrategias(cEntrenamiento* nuevaEstrategia)
{
	if (Estado_dragon == true) {
		Estrategias = nuevaEstrategia;
	}
	else
	{
		cout << "Primero debe dormarlo" << endl;
		return;
	}
}

FormasdeATAQUE cDragon::leer_estrategiaATAQUE()
{
	if (Estado_dragon == false) {
		return NINGUNO;
	}
	return Estrategias->leerFormaAtaque();
}

FormasdeDEFENSA cDragon::leer_estrategiaDEFENSA()
{
	if (Estado_dragon == false) {
		return NINGUNA;
	}
	return Estrategias->leerFormaDefensa();
}


string cDragon::LeerNombreDragon()
{
	return Nombre_dragon;
}

int cDragon::leerVidaTotal()
{
	return VidaTotal;
}

void cDragon::setVidaTotal(int GolpeObtenido)
{
	if (GolpeObtenido < VidaTotal) {
		VidaTotal = (VidaTotal - GolpeObtenido);
	}
	else if (GolpeObtenido >= VidaTotal) {
		VidaTotal = 0;
	}
	return;
}

cDragon::~cDragon()
{
}
