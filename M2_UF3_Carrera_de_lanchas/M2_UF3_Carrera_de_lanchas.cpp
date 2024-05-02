#include <iostream>
#include "Carrera_de_lanchas.h"
#include <stdlib.h>

int main() {
    srand(time(0));

    Lancha lancha1("Lancha 1", 0, 0, 1);
    Lancha lancha2("Lancha 2", 0, 0, 1);

    for (int turno = 1; turno <= 5; ++turno) {
        std::cout << "Turno " << turno << std::endl;

        lancha1.lanzarDado();
        lancha1.usarNitro();
        lancha1.calcularDistancia();
        

        lancha2.lanzarDado();
        lancha2.usarNitro();
        lancha2.calcularDistancia();

        lancha1.mostrarRecorrido();
        lancha2.mostrarRecorrido();

        std::cout << std::endl;

        std::string intro;
        std::cin >> intro;

        system("cls");
    }

    // Comprobación del ganador
    int distancia1 = lancha1.obtenerDistancia();
    int distancia2 = lancha2.obtenerDistancia();

    if (distancia1 > distancia2) {
        std::cout << lancha1.obtenerNombre() << " ha ganado la carrera!" << std::endl;
    }
    else if (distancia1 < distancia2) {
        std::cout << lancha2.obtenerNombre() << " ha ganado la carrera!" << std::endl;
    }
    else {
        std::cout << "¡Ha habido un empate!" << std::endl;
    }

    return 0;
}
