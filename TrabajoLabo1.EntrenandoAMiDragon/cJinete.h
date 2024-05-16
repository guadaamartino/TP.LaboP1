#pragma once
#include <string>
using namespace std;
enum Resultado { NO_ASISTIO, APROBADO, DESAPROBADO, PRIMERO, ULTIMO };

class cDragon;
class cJinete {

private:
    string nombre_jinete, apellido_jinete, apodo_jinete;
    string FechaNacimiento_jinete, Carac_fisicas;
    Resultado resultadoEnEntrenamiento;
    cDragon* dragoncito; 


public:
    cJinete(string nombre, string apellido, string apodo, string fecha_nacimiento, string caracteristicas);
    cJinete();
    void incorporarDragon(cDragon* nuevoDragon);
    void setResultadoEntrenamiento(Resultado resultado);
    Resultado  LeerResultadoEntrenamiento();
    void mostrarResultadoEntrenamiento();
    string LeerNombre();
    string LeerApellido();
    string  LeerApodo();
    string LeerFechaNacimiento();
    string LeerCaracteristicas();
    void setNombre(string nombre);
    void setApellido(string apellido);
    void setApodo(string apodo);
    void setFechadeNacimiento(string fecha_nacimiento);
    void setCaracteristicas(string caracteristicas);


    ~cJinete();



};
