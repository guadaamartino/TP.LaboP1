#include "cRegistroEstoico.h"
#include "cDragon.h"
#include"cJinete.h"



cRegistroEstoico::cRegistroEstoico(cJinete* jinetito, cDragon* dragoncito) {
    
    this->Jinetitos.push_back(jinetito);
    this->Dragoncitos.push_back(dragoncito);

}

cRegistroEstoico::cRegistroEstoico() {}


void cRegistroEstoico::CargarDragon(cDragon* dragoncito) {

    if (dragoncito != nullptr) {
        Dragoncitos.push_back(dragoncito);
        cout << "\nDragón " << dragoncito->LeerNombreDragon() << " agregado al registro." << endl;
    }
    else {
        cout << "Error: Dragón no válido." << endl;
    }
}
void cRegistroEstoico::quitar_dragon(cDragon* quito_dragon) {

    list<cDragon*>::iterator it = this->Dragoncitos.begin();
    bool borrado = false;

    while (it != this->Dragoncitos.end()) {

        if ((*it)->LeerNombreDragon() == quito_dragon->LeerNombreDragon()) {
            this->Dragoncitos.erase(it);
            borrado = true;
            break;
        }
        it++;
    }

    if (!borrado) {
        throw new exception("Error: No se encontro el dragon");
    }
}



void cRegistroEstoico::CargarJinete(cJinete* jinetito) {

    if (jinetito != nullptr) {
        Jinetitos.push_back(jinetito);
        cout << "\nJinete " << jinetito->LeerNombre() << " agregado al registro." << endl;
    }
    else {
        cout << "Error: Jinete no válido." << endl;
    }

}

void cRegistroEstoico::quitar_jinete(cJinete* quito_jinete) {

    list<cJinete*>::iterator it = this->Jinetitos.begin();
    bool borrado = false;

    while (it != this->Jinetitos.end()) {

        if ((*it)->LeerNombre() == quito_jinete->LeerNombre() ){
            this->Jinetitos.erase(it);
            borrado = true;
            break;
        }
        it++;
    }

    if (!borrado) {
        throw new exception("Error: No se encontro el jinete");
    }
}

cRegistroEstoico::~cRegistroEstoico() {}