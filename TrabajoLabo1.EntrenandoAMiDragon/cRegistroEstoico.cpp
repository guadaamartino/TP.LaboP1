#include "cRegistroEstoico.h"
#include "cDragon.h"
#include"cJinete.h"





cRegistroEstoico::cRegistroEstoico() {
  //inicializado en vacio
}


void cRegistroEstoico::CargarDragon(cDragon* dragoncito) {

    if (dragoncito != nullptr) {
        Dragoncitos.push_back(dragoncito);
        cout << "\nDragon " << dragoncito->LeerNombreDragon() << " agregado al registro." << endl;
    }
    else {
        cout << "Error: Dragon no válido." << endl;
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

    if (jinetito != nullptr  && jinetito->IfJineteDomo() == 1) {//verifica si domo a alguien para que la lista solo tenga jinetes q domaron a algun dragon
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


void cRegistroEstoico::ImprimirLista() {
    list<cDragon*>::iterator itDragon = this->Dragoncitos.begin();
    while (itDragon != this->Dragoncitos.end()) {
        cDragon* dragon = *itDragon;
        cout << "Nombre del dragon: " << dragon->LeerNombreDragon() << endl;
        cout << "Estado de domado: " << (dragon->Domado_dragon() ? "Domado" : "No Domado") << endl;
        if (dragon->Domado_dragon() == true) {//esta domado
            cout << "Jinetes que lo han domado: " << endl;


            list<cJinete*>::iterator itjinete = this->Jinetitos.begin();
            while (itjinete != this->Jinetitos.end()) {
                cJinete* jinete = *itjinete;
                if (jinete->devolver_dragon() == dragon) {
                    cout << jinete->LeerNombre()<<endl;
                }
                ++itjinete;
            }
        }
        break;
        cout << endl;
        ++itDragon;
    }
}

cRegistroEstoico::~cRegistroEstoico() {}