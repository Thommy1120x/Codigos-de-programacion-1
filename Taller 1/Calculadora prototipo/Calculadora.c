#include<stdio.h>
#include"operacionesbasicas.h"
int main (){
int num1, num2, menu;
    do {    
        printf ("Leer num 1\n");
        scanf ("%d",&num1);
        printf ("Leer num2\n");
        scanf ("%d",&num2);
        printf ("Que operacion desea hacer\n 1.Suma\n 2.Resta\n 3.Multiplicacion\n 4.Division\n 5.Salir\n");
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
            case 5:
                printf ("Usted a salido de la calculadora\n");
            break;
        }    
    }
    while (menu!=5);


return 0;
}