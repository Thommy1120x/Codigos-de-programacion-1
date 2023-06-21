#include<stdio.h>
#include"operaciones_con_punteros.h"
#include"operaciones_con_punteros.c"

int main(){
    float num1;
    float num2;
    float r;
    int opc;


    float* a=&num1;
    float* b=&num2;
    float* c=&r;


    int tamano;
    float arreglo[tamano];
    float escalar;


    int x;
    int t;
    float comparar1[t];
    float comparar2[t];


    char nombre1[100];
    char nombre2[100];

    
    
    switch (menu(opc))
    {
    case 1:
        printf("Ingrese el primer numero\n");
        scanf ("%f",&num1);
        printf("Ingrese el primer numero\n");
        scanf ("%f",&num2);
        suma ( &num1 , &num2, &r);
        printf("%.2f\n",r);
        break;
    case 2:
        printf("Ingrese el primer numero\n");
        scanf ("%f",&num1);
        printf("Ingrese el primer numero\n");
        scanf ("%f",&num2);
        resta ( &num1 , &num2, &r);
        printf("%.2f\n",r);
        break;
    case 3:
        printf("Ingrese el primer numero\n");
        scanf ("%f",&num1);
        printf("Ingrese el primer numero\n");
        scanf ("%f",&num2);
        multiplicacion ( &num1 , &num2, &r);
        printf("%.2f\n",r);
        break;
    case 4:
        printf("Ingrese el primer numero\n");
        scanf ("%f",&num1);
        printf("Ingrese el primer numero\n");
        scanf ("%f",&num2);
        division ( &num1 , &num2, &r);
        printf("%.2f\n",r);
        break;
    case 5:
        printf("Ingrese el tamanio del arreglo\n");
        scanf("%d",&tamano);
        for (int i=0 ; i<tamano; i++){
            printf("Que valor quiere poner el la posicion %d\n",i);
            scanf("%f",&arreglo[i]);
             
        }

        printf("Su arreglo es:\n");
        for (int i=0 ; i<tamano ; i++){
            printf("%.2f",arreglo[i]);
            printf("\n");
        }
        
        printf("Ingrese el valor del escalar que quiere sumar\n");
        scanf ("%f",&escalar);

        sumaarregloescalar(arreglo, tamano, escalar);

        for (int i=0; i<tamano; i++){
            printf("%2.f\n",arreglo[i]);
        }
    
        break;
    case 6:

        printf("Ingrese el tamanio de los arreglos\n");
        scanf("%d",&t);
    
        for (int i=0 ; i<t; i++){
            printf("Que valor quiere poner el la posicion %d del arreglo 1\n",i);
            scanf("%f",&comparar1[i]);
        }

        for (int i=0 ; i<t; i++){
            printf("Que valor quiere poner el la posicion %d del arreglo 2\n",i);
            scanf("%f",&comparar2[i]);
        }
        datos_comparacion( comparar1 ,  comparar2,  t);

        break;

    case 7:
        printf("Ingrese el tamanio del arreglo\n");
        scanf("%d",&tamano);
        for (int i=0 ; i<tamano; i++){
            printf("Que valor quiere poner el la posicion %d\n",i);
            scanf("%f",&arreglo[i]);
             
        }

        printf("Su arreglo es:\n");
        for (int i=0 ; i<tamano ; i++){
            printf("%.2f",arreglo[i]);
            printf("\n");
        }
        
        printf("Ingrese el valor del escalar que quiere sumar\n");
        scanf ("%f",&escalar);

        sumaarregloescalar2(arreglo, tamano, escalar);

        for (int i=0; i<tamano; i++){
            printf("%2.f\n",arreglo[i]);
        }
        break;
    default:
        printf ("Opcion no valida\n");
        break;
    }
    

}