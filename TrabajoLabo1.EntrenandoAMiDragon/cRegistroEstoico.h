#pragma once
#include <string>
#include <list>
using namespace std;

class cDragon;
class cJinete;
class cRegistroEstoico
{
	list<cJinete*> Jinetitos;

	list <cDragon*> Dragoncitos;

public:
 
    cRegistroEstoico();
    void CargarDragon(cDragon* dragoncito);
    void quitar_dragon(cDragon* quito_dragon);
    void CargarJinete(cJinete* jinetito);
    void quitar_jinete(cJinete* quito_jinete);
    void ImprimirLista();/*Nuestra idea es que la lista de jinetes SOLO contenga aquellos que domaron a algun dragon.
    De esta manera listar todos los dragones y aquellos domados buscarlos en la lista de jinetes para ver quien fue el q los domo*/
    ~cRegistroEstoico();

};

