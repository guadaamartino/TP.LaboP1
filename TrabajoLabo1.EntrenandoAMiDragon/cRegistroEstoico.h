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
    cRegistroEstoico(cJinete* jinetito, cDragon* dragoncito);
    cRegistroEstoico();
    void CargarDragon(cDragon* dragoncito);
    void quitar_dragon(cDragon* quito_dragon);
    void CargarJinete(cJinete* jinetito);
    void quitar_jinete(cJinete* quito_jinete);
    ~cRegistroEstoico();

};

