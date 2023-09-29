#include <stdio.h>

int main() {
    double alturaChico = 1.50; // Altura inicial de Chico em metros
    double alturaZe = 1.10;   // Altura inicial de Zé em metros
    int anos = 0;             // Inicializa o contador de anos

    while (alturaZe <= alturaChico) {
        alturaChico += 0.02; // Chico cresce 2 centímetros por ano (0.02 metros)
        alturaZe += 0.03;    // Zé cresce 3 centímetros por ano (0.03 metros)
        anos++;              // Incrementa o contador de anos
    }

    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);

    return 0;
}
