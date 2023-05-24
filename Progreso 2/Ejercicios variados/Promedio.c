#include<stdio.h>
int main(){
    int arregloNumeros[10];
    int i;
    float suma;
    for ( i = 0; i < 10 ; i++)
    {
        printf ("Ingrese el numero %d\n", i);
        scanf ("%d",& arregloNumeros[i]);
        suma+=arregloNumeros[i];
    }
        suma/=10;
        printf ("El promedio es %.2f\n", suma);


      for ( i=9 ; i >= 0; i--)
    {
        printf ("%d\n", arregloNumeros[i]);
    }
    return 0;
}