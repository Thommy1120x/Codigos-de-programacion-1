#include <stdio.h>
#include "player.h"

void juegoNuevo() {
    jugarLaberinto();
}

int main() {
    int opcion;
    printf("\n--- Menu principal ---\n");
        printf("1. Jugar al laberinto\n");
        printf("2. creditos\n");
        printf("3.Salir\n");
        printf("Ingrese su opcion: ");
        scanf(" %c", &opcion);

        switch (opcion) {
            case '1':
                juegoNuevo();
                break;
            case '2':
                printf ("Thommy Calderon\nID Banner:A00108943\n");
                break;
            case 3:
                printf ("Se acabo el juego");
            default:
                printf("Opcion invalida. Por favor, seleccione una opcion valida.\n");
        }
}
