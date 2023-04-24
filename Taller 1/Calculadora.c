#include<stdio.h>
#include"operacionesbasicas.h"
int main (){
    int num1, num2, menu;
    printf ("Leer num 1\n");
    scanf ("%d",&num1);
    printf ("Leer num2\n");
    scanf ("%d",&num2);
    printf ("Que operacion desea hacer\n 1.Suma\n 2.Resta\n 3.Multiplicacion\n 4.Division\n");
    scanf ("%d",&menu);
    switch (menu){
        case 1:
            Sumar (num1,num2);
        break;

        case 2:
            Restar (num1,num2);
        break;

        case 3:
            Multiplicar (num1,num2);
        break;

        case 4:
            Dividir (num1,num2);
        break;
    }    



return 0;
}