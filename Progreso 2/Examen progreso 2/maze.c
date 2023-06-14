#include <stdio.h>


int maze[5][5] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};

void laberinto(int x, int y){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == y && j == x){
                printf("X ");
            }
            else{
                printf("%d ", maze[i][j]);
            }                
        }
        printf("\n");
    }
}

int valida_movimiento(int x, int y){
    if(x < 0 || x > 4 || y < 0 || y > 4 || maze[y][x] == 1){
        return 0;
    }
    return 1;
}