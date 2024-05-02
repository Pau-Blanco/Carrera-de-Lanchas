#include "Carrera_de_lanchas.h"

Lancha::Lancha() 
{

}

Lancha::Lancha(std::string pnombreCorredor, int pvelocidad, int pdistanciaRecorrida, int pnitro) 
{
	nombreCorredor = pnombreCorredor;
	velocidad = pvelocidad;
	distanciaRecorrida = pdistanciaRecorrida;
	nitro = pnitro;
}

void Lancha::lanzarDado() 
{
	int puntos = rand() % 6 + 1;
	velocidad += puntos;
	std::cout << nombreCorredor << " lanza el dado y obtuvo " << puntos << " puntos. Velocidad actual: " << velocidad << std::endl;

    
}

void Lancha::mostrarRecorrido()
{
    for (int i = 0; i < velocidad; i++) {
        std::cout << "_";
    }
    std::cout << "x\n";
}

void Lancha::usarNitro()
{

    if (nitro > 0)
    {
        std::cout << "Desea usar el Nitro? (s/n)";
        std::string res;
        std::cin >> res;

        if (res == "s") {
            nitro--;
            int factor = rand() % 2;
            if (factor == 0) {
                velocidad /= 2;
                std::cout << nombreCorredor << " ha usado nitro, pero falla. Velocidad reducida a la mitad: " << velocidad << std::endl;
            }
            else {
                velocidad *= 2;
                std::cout << nombreCorredor << " ha usado nitro y ha tenido exito. Velocidad duplicada: " << velocidad << std::endl;
            }
        }
        
    }
    else {
        std::cout << nombreCorredor << " no tiene nitro disponible." << std::endl;
    }
}

void Lancha::calcularDistancia()
{
    distanciaRecorrida += velocidad * 100;
    std::cout << nombreCorredor << " ha recorrido " << distanciaRecorrida << " metros " << std::endl;
}

int Lancha::obtenerDistancia()
{
    return distanciaRecorrida;
}

std::string Lancha::obtenerNombre()
{
    return nombreCorredor;
}