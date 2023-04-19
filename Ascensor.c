#include<stdio.h>
int main(void){
int ascensor, piso, piso2, selec;
ascensor=0;
while (selec!=4) {
selec=0;
printf ("1.Llamar ascensor\n 2.Seleccionar piso\n 3.Mostrar piso actual\n 4.Salir\n");
scanf ("%d",& selec ); 

switch (selec){
    case 1:
    do { 
    printf ("Llamar ascensor al piso\n");
    scanf("%d",& piso);
    if (piso < 0 || piso > 9){
        printf ("El edificio tiene desde el piso 0 hasta el piso 9\n");
    }
    }
    while (piso < 0 || piso > 9);
    printf ("El ascensor esta en el piso %i\n", ascensor);
    do {
    if (ascensor < piso) {
        ascensor=ascensor+1;
        printf ("piso %i\n",ascensor);
    } else {
        if (ascensor > piso) {
            ascensor=ascensor-1;
            printf ("piso %i\n",ascensor);
        }
    }
    }
    while (ascensor != piso);
    break;
    case 2:
    printf ("A que piso desea ir\n");
    scanf ("%d",& piso2);
    printf ("El ascensor esta en el piso %i\n", ascensor);
    if (piso2 > ascensor) {
        do {
        ascensor=ascensor+1;
        printf ("piso %i\n", ascensor);
         }
        while (piso2 >= ascensor+1);
        } else { 
            if (piso2 < ascensor) {
                do { 
                ascensor = ascensor - 1;
                printf("Piso %i\n", ascensor);
                    }
                while (piso2 <= ascensor-1);
                }
            }
    break;
    case 3:
        switch (ascensor){ 
        case 0:
        printf ("Planta Baja\n");
        break;

        case 1:
        printf ("Piso 1\n");
        break;

        case 2:
        printf ("Piso 2\n");
        break;

        case 3:
        printf ("Piso 3\n");
        break;

        case 4:
        printf ("Piso 4\n");
        break;

        case 5:
        printf ("Piso 5\n");
        break;

        case 6:
        printf ("Piso 6\n");
        break;

        case 7:
        printf ("Piso 7\n");
        break;

        case 8:
        printf ("Piso 8\n");
        break;

        case 9:
        printf ("Piso 9\n");
        break;
        }
    break;
    case 4:
    printf ("Usted a salido del ascensor");
}

}


return 0;
}
