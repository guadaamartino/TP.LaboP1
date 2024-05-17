// TrabajoLabo1.EntrenandoAMiDragon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "cDragon.h"
#include "cVikingo.h"
#include "cJinete.h"
#include "cRegistroEstoico.h"


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


    cDragon* nuevoDragon = new cDragon("dragoncito", "Feroz", "grande", "rojo", true,30000);

    cJinete Jinetito("Juan", "Perez", "Jinetito", "19/10/1800", "alto, pelirrojo");
    Jinetito.incorporarDragon(nuevoDragon);

    // Mostrar info del jinetito
    cout << "\nInfo del jinete :" << endl;
    cout << "Nombre: " << Jinetito.LeerNombre() << endl;
    cout << "Apellido: " << Jinetito.LeerApellido() << endl;
    cout << "Apodo: " << Jinetito.LeerApodo() << endl;
    cout << "Fecha de nacimiento: " << Jinetito.LeerFechaNacimiento() << endl;
    cout << "Caracteristicas fisicas:  " << Jinetito.LeerCaracteristicas() << endl;


    Jinetito.setResultadoEntrenamiento(APROBADO);
    cout << "Resultado del entrenamiento: ";
    Jinetito.mostrarResultadoEntrenamiento();
    cout << Jinetito.leerDRAGON(nuevoDragon);

    cRegistroEstoico registro;

    cDragon* dragon1 = new cDragon("Veloz", "Dientudo", "Grande", "Negro", true, 30000);
    cDragon* dragon2 = new cDragon("Fuego", "Furioso", "Mediano", "Rojo", true, 30000);

    
    cJinete* jinete1 = new cJinete("Juan", "Perez", "Jinetito", "19/10/1800", "alto, pelirrojo");
    
    cJinete* jinete2 = new cJinete("Ana", "Garcia", "Jinetita", "01/05/1805", "baja, rubia");
    
    // Cargar dragones y jinetes en el registro
    registro.CargarDragon(dragon1);
    registro.CargarDragon(dragon2);

    // Incorporar dragones a los jinetes (doma)
    jinete1->incorporarDragon(dragon1);
    jinete2->incorporarDragon(dragon2);

    // Verificar si los jinetes han domado algun dragon antes de agregarlos 
    if (jinete1->IfJineteDomo()) {
        registro.CargarJinete(jinete1);
    }
    if (jinete2->IfJineteDomo() ){
        registro.CargarJinete(jinete2);
    }

    cDragon* dragon_a_eliminar = dragon1;
    try {
        registro.quitar_dragon(dragon_a_eliminar);
        std::cout << "Dragon eliminado ." << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    cJinete* jinete_a_eliminar = jinete1;
    try {
        registro.quitar_jinete(jinete_a_eliminar);
        std::cout << "Jinete eliminado" << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    //registro.ImprimirLista();

    delete dragon1;
    delete dragon2;
    delete jinete1;
    delete jinete2;
    delete nuevoDragon;

}

