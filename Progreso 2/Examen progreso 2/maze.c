#include <stdio.h>

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

int esMovimientoValido(int laberinto[FILAS][COLUMNAS], int fila, int columna, char direccion) {
    int nuevaFila = fila;
    int nuevaColumna = columna;

    switch (direccion) {
        case 'W':  
            nuevaFila--;
            break;
        case 'S': 
            nuevaFila++;
            break;
        case 'A':  
            nuevaColumna--;
            break;
        case 'D':
            nuevaColumna++;
            break;
    }

    if (nuevaFila >= 0 && nuevaFila < FILAS && nuevaColumna >= 0 && nuevaColumna < COLUMNAS) {
        if (laberinto[nuevaFila][nuevaColumna] == 0) {
            return 1;  // Movimiento válido
        } else {
            return -1;  // Hay una pared
        }
    } else {
        return 0;  // Movimiento fuera de los límites del laberinto
    }
}