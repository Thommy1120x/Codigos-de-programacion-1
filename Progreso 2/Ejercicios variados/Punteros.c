#include <stdio.h>

void funcionpuntero (int*p, int* p2){
    *p=50;
    *p2=100;
}


int main (){ 
    /*Para declarar un puntero: int* p=&a 
    para imprimir printf(*p) 
    Diferencia entre 
    char nombre[20]
    char* nombre 
    el primero se queda con la dimension inicial el segundo se puede modificar.
    */

   //primer puntero
    int ent, flo, ch, dou, uent;

    ent= sizeof (int);
    flo= sizeof (float);
    ch= sizeof (char);
    dou= sizeof (double);
    uent= sizeof (unsigned int);

    printf ("El entero tiene %d bytes\n",ent);
    printf ("El float tiene %d bytes\n",flo);
    printf ("El char tiene %d bytes\n",ch);
    printf ("El double tiene %d bytes\n",dou);
    printf ("El entero unsigned tiene %d bytesx\n",uent);

    //segundo puntero
    int b=20;
    int a=10;
    int* p = &a;
    *p = 35;
    int* p2=&b;
    printf ("El valor de a es %d\n",a);
     printf ("El valor de a es %d\n",b);
    printf ("El valor de la direccion p es %d\n",p);
    printf ("El valor de p es %d\n",*p); 
    printf ("El valor de p2 es %d\n",*p2);
    printf ("El valor de la direccion p es %d\n",p2);



return 0;
}
