#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>

class Lancha{
	
private:
	std::string nombreCorredor;
	int velocidad;
	int distanciaRecorrida;
	int nitro;

public:
	
    Lancha();
    Lancha(std::string pnombreCorredor, int pvelocidad, int pdistanciaRecorrida, int pnitro);
    
    void lanzarDado();

    void usarNitro();

    void calcularDistancia();

    int obtenerDistancia() ;
 
    std::string obtenerNombre();

    void mostrarRecorrido();
};

