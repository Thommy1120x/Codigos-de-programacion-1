#include<stdio.h>

int Sumar(int sumando1, int sumando2){
    int suma;
    suma = sumando1 + sumando2;
    printf ("La suma de los numeros es %d\n",suma);
}
int Restar (int restando1, int restando2){
    int resta;
    resta = restando1 - restando2;
    printf ("La resta de los numeros es %d\n",resta);
}
int Multiplicar (int multiplicando1, int multiplicando2){
    int mult;
    mult = multiplicando1 * multiplicando2; 
    printf ("La multiplicacion de los numeros es %d\n", mult);
}
float Dividir (float divisor , float dividendo){
    float div;
    if (dividendo>0) {
        div = divisor / dividendo;
        printf ("La division de los numeros es %.2f",div);
    } else {
        printf ("La division para 0 no existe");
    }
}