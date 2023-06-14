#include "maze.h"
#include <stdio.h>

int x;
int y;
int mov; 

void inicio(){
    x = 0;
    y = 0;
    mov = 0;
}

int ganar(int x, int y){
    if(x == 4 && y == 4){        
        return 1;
    }
    else{
        return 0;
    }
}

int movimiento_jugador(char movimiento){
    
    switch (movimiento)
    {
        case 'w':
        if(valida_movimiento(x, y - 1)){
            mov++;
            y--;
        }
        break;
        case 's':
        if(valida_movimiento(x, y + 1)){
            mov++;
            y++;
        }
        break;
        case 'a':
        if(valida_movimiento(x - 1, y)){
            mov++;
            x--;
        }
        break;
        case 'd':
        if(valida_movimiento(x + 1, y)){
            mov++;
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
    printf("Movimientos: %d\n", mov);
}

void verificar_movimiento(){
    if(mov <= 8){
        printf("Eres un pro!\n");
    }
    else if(mov <= 15){
        printf("Eres un novato!\n");
    }
    else{
        printf("Eres un noob!\n");
    }
}