#pragma once



enum FormasdeATAQUE {
	NINGUNO, GARRAS, DIENTES, FUEGO, PESO, GOLPE
};
enum FormasdeDEFENSA {
	NINGUNA, CAMUFLAJE, VUELO, CAPARAZON, REGENERACION
};

class cEntrenamiento
{
	FormasdeATAQUE Estrategia_ataque;
	FormasdeDEFENSA Estrategia_defensa;
public:
	cEntrenamiento();
	FormasdeATAQUE leerFormaAtaque();
	FormasdeDEFENSA leerFormaDefensa();
	void setearFormaAtaque(FormasdeATAQUE formita);
	void setearFormaDefensa(FormasdeDEFENSA formas);
	~cEntrenamiento();
};