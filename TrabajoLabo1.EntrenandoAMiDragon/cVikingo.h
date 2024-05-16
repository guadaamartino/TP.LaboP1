#pragma once
#include <string>
using namespace std;
#include "cDragon.h" //tienen un vinculo de asociacion
class cVikingo
{
private:
	string Nombre_vikingo, Apellido_vikingo, Posicion_vikingo;
	int cantMuertes_Asociadas;
public:
	cVikingo(string Nombre, string Apellido, string Posicion);
	//string LeerNombre();
	//string LeerApellido();
	//string LeerPosicion();
	void SetPosicion(string Trabajo);//Trabajar: qué posición ocupa en la isla de Berk
	void AtacarAlDragon(int GolpeDado, cDragon& dragoncito1);
	void MensajeAVikingos(cDragon dragoncito);
	~cVikingo();
};

