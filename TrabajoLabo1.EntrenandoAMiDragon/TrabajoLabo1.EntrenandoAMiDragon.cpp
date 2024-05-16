// TrabajoLabo1.EntrenandoAMiDragon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "cVikingo.h"

int main()
{
    cDragon dragoncito1("Veloz", "Dientudo", "Grande", "Negro", 1, 30000);
    cEntrenamiento nuevoentrenamiento;//inicialmente su forma de ataque y defensa es:ninguna
    nuevoentrenamiento.setearFormaAtaque(GARRAS);
    nuevoentrenamiento.setearFormaDefensa(VUELO);
    dragoncito1.CargarEstrategias(&nuevoentrenamiento);
    std::cout << "Tu dragon " << dragoncito1.LeerNombreDragon() << "Tiene forma de ataque: " << std::endl << dragoncito1.leer_estrategiaATAQUE() << std::endl;
    std::cout << "Y forma de defensa:" << std::endl << dragoncito1.leer_estrategiaDEFENSA() << std::endl;
    cVikingo vikingo1("Carlos", "Fernandez", "Tala");
    vikingo1.MensajeAVikingos(dragoncito1);
    vikingo1.AtacarAlDragon(20000, dragoncito1);
    cout << "La vida luego del golpe queda en " << dragoncito1.leerVidaTotal();
}

