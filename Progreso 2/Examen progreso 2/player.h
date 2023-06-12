#ifndef PLAYER_H
#define PLAYER_H

void moverJugador(int laberinto[FILAS][COLUMNAS], int* fila, int* columna, char direccion);
int verificarVictoria(int laberinto[FILAS][COLUMNAS], int fila, int columna);
void jugarLaberinto();

#endif  // PLAYER_H

