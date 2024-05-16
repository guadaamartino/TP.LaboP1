#include "cEntrenamiento.h"

cEntrenamiento::cEntrenamiento()
{
    Estrategia_ataque = NINGUNO;
    Estrategia_defensa = NINGUNA;
}

FormasdeATAQUE cEntrenamiento::leerFormaAtaque()
{

    return Estrategia_ataque;


}

FormasdeDEFENSA cEntrenamiento::leerFormaDefensa()
{

    return Estrategia_defensa;



}

void cEntrenamiento::setearFormaAtaque(FormasdeATAQUE formita)
{

    Estrategia_ataque = formita;
    return;
}

void cEntrenamiento::setearFormaDefensa(FormasdeDEFENSA formas)
{
    Estrategia_defensa = formas;
    return;
}

cEntrenamiento::~cEntrenamiento()
{
}

