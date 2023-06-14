#include "maze.h"
#include <stdio.h>

int x;
int y;
int numMovimientos; 

void inicio(){
    x = 0;
    y = 0;
    numMovimientos = 0;
}

int ganar(int x, int y){
    if(x == 4 && y == 4){        
        return 1;
    }
    else{
        return 0;
    }
}

int movimiento_jugador(char movement){
    
    switch (movement)
    {
        case 'w':
        if(valida_movimiento(x, y - 1)){
            numMovimientos++;
            y--;
        }
        break;
        case 's':
        if(valida_movimiento(x, y + 1)){
            numMovimientos++;
            y++;
        }
        break;
        case 'a':
        if(valida_movimiento(x - 1, y)){
            numMovimientos++;
            x--;
        }
        break;
        case 'd':
        if(valida_movimiento(x + 1, y)){
            numMovimientos++;
            x++;
        }
        default:
            printf("Movimiento invalido\n");
        break;
    }
  
    return ganar(x, y);
}

void jugador(){
    laberinto(x, y);   
}

void Movimientos_total(){
    printf("Movimientos: %d\n", numMovimientos);
}

void verificar_movimiento(){
    if(numMovimientos <= 8){
        printf("Eres un pro!\n");
    }
    else if(numMovimientos <= 15){
        printf("Eres un novato!\n");
    }
    else{
        printf("Eres un noob!\n");
    }
}