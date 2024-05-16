#include "cJinete.h"
#include "cDragon.h"

cJinete::cJinete(string nombre, string apellido, string apodo, string fecha_nacimiento, string caracteristicas) {
    nombre_jinete = nombre;
    apellido_jinete = apellido;
    apellido_jinete = apodo;
    FechaNacimiento_jinete = fecha_nacimiento;
    Carac_fisicas = caracteristicas;
    dragoncito = nullptr;

}
cJinete::cJinete() {}

void cJinete::incorporarDragon(cDragon* nuevoDragon) {
    dragoncito = nuevoDragon;

}

void cJinete::setResultadoEntrenamiento(Resultado resultado) {
    resultadoEnEntrenamiento = resultado;
}
void cJinete::mostrarResultadoEntrenamiento() {
    switch (resultadoEnEntrenamiento) {
    case NO_ASISTIO:
        cout << "No asistió";
        break;
    case APROBADO:
        cout << "Aprobado";
        break;
    case DESAPROBADO:
        cout << "Desaprobado";
        break;
    case PRIMERO:
        cout << "Primero";
        break;
    case ULTIMO:
        cout << "Último";
        break;
    }
    cout << endl;
}

void cJinete::setNombre(string nombre) {
    nombre_jinete = nombre;
}

void cJinete::setApellido(string apellido) {
    apellido_jinete = apellido;
}

void cJinete::setApodo(string apodo) {
    apodo_jinete = apodo;
}
void cJinete::setFechadeNacimiento(string fecha_nacimiento) {
    FechaNacimiento_jinete = fecha_nacimiento;
}
void cJinete::setCaracteristicas(string caracteristicas) {
    Carac_fisicas = caracteristicas;

}

Resultado cJinete::LeerResultadoEntrenamiento() {
    return resultadoEnEntrenamiento;
}

string cJinete::LeerNombre() {
    return nombre_jinete;
}

string cJinete::LeerApellido() {
    return apellido_jinete;
}

string cJinete::LeerApodo() {
    return apodo_jinete;
}

string cJinete::LeerFechaNacimiento() {
    return FechaNacimiento_jinete;
}

string cJinete::LeerCaracteristicas() {
    return Carac_fisicas;

}



cJinete::~cJinete() {}
