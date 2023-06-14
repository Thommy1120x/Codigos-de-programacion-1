#include <stdio.h>
#include "player.h"
int menu(){
    int opcion;
    printf("Bienvenido al juego del laberinto!\n");
    printf("1. Jugar\n");
    printf("2. Creditos\n");
    printf("3. Salir\n");
    scanf("%d", &opcion);
    return opcion;
}

int juegoNuevo(){
    int ganar = 0;
    inicio();
    char movement;    
    jugador();
    do
    {
        printf("Ingrese su movimiento: ");
        scanf(" %c", &movement);
        ganar = movimiento_jugador(movement);    
        jugador();    
        Movimientos_total();
        if(ganar){
            printf("Felicidades, has ganado!\n");
            verificar_movimiento();
        }
    } while (!ganar);
    
}

int main(void)
{
    int opcion;
    do
    {
        opcion = menu();
        switch (opcion)
        {
            case 1:
            printf("Bienvenido al Laberinto\n");
            juegoNuevo();
            break;
            case 2:
            printf("Créditos\n");
            printf("Realizado por: \n");
            printf("Nicolás Rojas\n");
            break;
            case 3:
            printf("Salir\n");
            break;
            default:
            printf("Opcion invalida\n");
        } 
    } while (opcion != 3);
        
    return 0;
}