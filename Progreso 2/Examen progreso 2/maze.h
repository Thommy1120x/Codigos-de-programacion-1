#ifndef MAZE_H
#define MAZE_H

#define FILAS 5
#define COLUMNAS 5

void imprimirLaberinto(int laberinto[FILAS][COLUMNAS]);
int esMovimientoValido(int laberinto[FILAS][COLUMNAS], int fila, int columna, char direccion);
void marcarMovimiento(int laberinto[FILAS][COLUMNAS], int fila, int columna);

#endif  // MAZE_H
