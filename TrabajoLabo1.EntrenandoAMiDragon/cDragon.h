#pragma once
#include<iostream>
#include <string>
#include "cEntrenamiento.h"
using namespace std;

class cDragon
{
private:
	string Nombre_dragon, Caract_dragon, Taman_dragon, Color_dragon;
	bool Estado_dragon; //domado o no
	cEntrenamiento* Estrategias;//puntero que apunta a las estrategias de ataque y defensa (inicia NULL)
	int VidaTotal;
public:
	cDragon(string Nombre, string Caracteristica, string Tamanio, string Color, bool Estado, int CantVida);
	void AltaNombre_dragon(string Habilidad);//estudiadas sus habilidades, se le asigna un nombre
	bool Domado_dragon(); // Devuelve true o false si su jinete logró domarlo
	void CargarEstrategias(cEntrenamiento* nuevaEstrategia);//Entrenar: Una vez domado, el dragón debe desarrollar estrategias de ataque y defensa
	FormasdeATAQUE leer_estrategiaATAQUE();
	FormasdeDEFENSA leer_estrategiaDEFENSA();
	string LeerNombreDragon();
	int leerVidaTotal();
	void setVidaTotal(int GolpeObtenido);
	~cDragon();



};


