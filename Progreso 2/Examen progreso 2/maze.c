#include <stdio.h>
#include "maze.h"
//imprimir laberinto 
    #define FILAS 5
    #define COLUMNAS 5
    int maze[5][5] = {
        { 0 , 1 , 0 , 0 , 0 }, 
        { 0 , 1 , 1 , 1 , 0 },
        { 0 , 0 , 0 , 0 , 0 },
        { 0 , 1 , 0 , 1 , 0 },
        { 1 , 0 , 0 , 1 , 0 }
    };

void imprimirLaberinto(int laberinto[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (laberinto[i][j] == 1) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int MovimientoValido(int laberinto[FILAS][COLUMNAS], int fila, int columna, char direccion) {
    

    switch (direccion) {
        case 'W':  // Arriba
            fila=fila-1;
            break;
        case 'S':  // Abajo
            fila=fila+1;
            break;
        case 'A':  // Izquierda
            columna=columna-1;
            break;
        case 'D':  // Derecha
            columna=columna+1;
            break;
    }

    if (fila >= 0 && fila < FILAS && columna >= 0 && columna < COLUMNAS) {
        if (laberinto[fila][columna] == 0) {
            return 1;  // Movimiento válido
        } else {
            return 0;  // Hay una pared
        }
    } else {
        return 0;  // Movimiento fuera de los límites del laberinto
    }
}

void marcarMovimiento(int laberinto[FILAS][COLUMNAS], int fila, int columna) {
    laberinto[fila][columna] = 2;  // Marcar el movimiento en el laberinto
}
