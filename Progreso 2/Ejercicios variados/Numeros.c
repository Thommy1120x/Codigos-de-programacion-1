#include<stdio.h>

int main(){
    int arreglonumeros [5];
    int i, aux;
    
    for (i=0;i<5;i++){
        printf ("Ingrese el numero %d\n",i);
        scanf ("%d",&arreglonumeros[i]);
    }

    for (i=4;i>=0;i--){
        printf ("%d\n", arreglonumeros[i]);
    }

    printf ("La nueva cadena invertida es\n");
    for (i=4;i>=0;i--){
        printf ("%d\n", arreglonumeros[i]);
    }
    return 0;
}