#include<stdio.h>
#include<string.h>



void menu (int opcion1){
    int ruta, distancia;
    do { 
    printf ("1.Operacion de transporte\n 2.Interactuar en la red social\n 3.Salir\n");
    scanf ("%d",&opcion1);
    if (opcion1<0 && opcion1>3){
    printf ("Opcion no existente elija de nuevo\n");
    }
    }
    while (opcion1<0 && opcion1>3);
}

void operaciontransporte (int ruta, int distancia){
 int i;
 for ( i = 1; i <=5 ; i++){
 printf ("Ingrese la ruta\n 1.Urbana\n 2.Interurbana\n 3.Internacional\n");
 scanf ("%d",&ruta);
 printf ("Ingrese la distancia en kilometros");
 scanf ("%d",& distancia);
 } return distancia;

}

void precioruta (int precio){
    int urbana;
    int interurbana;
    int internacional;
    operaciontransporte ;
    urbana=0.10;
    interurbana=0.15;
    internacional=0.20;



}

void descuento (int precioruta){
    

}

int main (){
int contra, contra1, contra2, contra3, i, i1, i2, i3,opcion1,ruta , distancia;
    char ver [20];
    char nombre1 [20] =("thommy");
    contra1=2001;
    char nombre2 [20] =("karol");
    contra2=2002;
    char nombre3 [20] =("luis"); 
    contra3=2003;
    printf ("Ingrese su usuario\n");
    scanf ("%s",&ver);
    printf ("Ingrese su clave\n");
    scanf ("%d",&contra);

    i1=strcmp(ver, nombre1);
    i2 = strcmp (ver, nombre2);
    i3 = strcmp (ver, nombre3);
    if (i1==0 && contra==contra1 || i2==0 && contra==contra2 || i3==0 && contra== contra3){
        printf ("Bienvenido\n");
    } else { 
        printf ("Datos ingresados incorrectos\n");
        }
    menu (opcion1);
    operaciontransporte (ruta, distancia);








return 0;
}