#include "cVikingo.h"

cVikingo::cVikingo(string Nombre, string Apellido, string Posicion)
{
	Nombre_vikingo = Nombre;
	Apellido_vikingo = Apellido;
	Posicion_vikingo = Posicion;
	cantMuertes_Asociadas = -1;//Negativo: Si el vikingo no mató ningún dragón
}

void cVikingo::SetPosicion(string Trabajo)
{
	Posicion_vikingo = Trabajo;
	return;
}

void cVikingo::AtacarAlDragon(int GolpeDado, cDragon& dragoncito1)
{
	if (dragoncito1.leerVidaTotal() <= GolpeDado) {
		//lo mato
		if (cantMuertes_Asociadas == -1) {
			cantMuertes_Asociadas = 1;
		}
		else
		{
			cantMuertes_Asociadas++;
		}
		dragoncito1.setVidaTotal(GolpeDado);
		return;
	}
	else if (dragoncito1.leerVidaTotal() > GolpeDado)
	{
		//no lo mata
		dragoncito1.setVidaTotal(GolpeDado);
		return;
	}
	return;
}

void cVikingo::MensajeAVikingos(cDragon dragoncito)
{
	cout << "Vamos a atacar a " << dragoncito.LeerNombreDragon() << std::endl;
}



cVikingo::~cVikingo()
{
}
