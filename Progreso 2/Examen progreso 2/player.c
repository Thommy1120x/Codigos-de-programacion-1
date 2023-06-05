#include <stdio.h>
#include "maze.h"
#include "player.h"

void moverJugador(int laberinto[FILAS][COLUMNAS], int* fila, int* columna, char direccion) {
    switch (direccion) {
        case 'W':  // Arriba
            (*fila)--;
            break;
        case 'S':  // Abajo
            (*fila)++;
            break;
        case 'A':  // Izquierda
            (*columna)--;
            break;
        case 'D':  // Derecha
            (*columna)++;
            break;
    }
}

int verificarVictoria(int laberinto[FILAS][COLUMNAS], int fila, int columna) {
    if (fila == FILAS - 1 && columna == COLUMNAS - 1) {
        return 1;  // Victoria
    } else {
        return 0;  // No se ha llegado a la salida
    }
}

void jugarLaberinto() {
    int laberinto[FILAS][COLUMNAS] ={ 
        { 0 , 1 , 0 , 0 , 0 }, 
        { 0 , 1 , 1 , 1 , 0 },
        { 0 , 0 , 0 , 0 , 0 },
        { 0 , 1 , 0 , 1 , 0 },
        { 1 , 0 , 0 , 1 , 0 }
    
    };

    int fila = 0;
    int columna = 0;
    int movimientos = 0;

    char movimiento;

    printf("¡Bienvenido al laberinto!\n");
    printf("Puedes moverte usando las teclas WASD (W: arriba, S: abajo, A: izquierda, D: derecha)\n");

    while (1) {
        printf("\n");
        imprimirLaberinto(laberinto);

        printf("Posición del jugador: (%d, %d)\n", fila, columna);
        printf("Movimientos realizados: %d\n", movimientos);

        printf("Ingrese su movimiento: ");
        scanf(" %c", &movimiento);

        int validacion = esMovimientoValido(laberinto, fila, columna, movimiento);

        if (validacion == 1) {
            moverJugador(laberinto, &fila, &columna, movimiento);
            movimientos++;
        } else if (validacion == -1) {
            printf("Movimiento inválido. Hay una pared.\n");
        } else {
            printf("Movimiento inválido. Fuera de los límites del laberinto.\n");
        }

        int victoria = verificarVictoria(laberinto, fila, columna);

        if (victoria) {
            printf("\n¡Ganaste!\n");

            if (movimientos <= 8) {
                printf("Eres un Pro!\n");
            } else if (movimientos <= 15) {
                printf("Eres novato\n");
            } else {
                printf("Eres un noob!\n");
            }

            break;
        }
    }
}
