#include<stdio.h>

int main(){
    int arreglonumero []={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int num,i;
    printf ("Ingrese un numero\n");
    scanf ("%d",& num);
    for (i=0; i<=16;i++){
        if (arreglonumero[i]==num) {
            printf ("El numero esta dentro del arreglo\n");
            i=16;
        }
    }

    if (arreglonumero[16]!=num){
        printf ("Numero no encontrado");
    }
    return 0;
}