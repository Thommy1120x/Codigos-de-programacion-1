#include<stdio.h>

void funcionpuntero(int* p, int* p2){
    *p = 50;
    *p2 = 100;

}


void cambiar(int* p, int* p2){
    int aux;
    int* p3;
    *p3= *p2 + *p;
    aux=*p2;
    *p2=*p;
    *p=aux;

    printf("El valor de la direccion de a es %d\n", &*p);
    printf("El valor de la direccion de a es %d\n", &*p2);
    printf("El valor de la direccion de a es %d\n", &*p3);
    printf("La suma de a y b es %d", *p3);

}


int cambiarsin(int a, int b){
    int aux;
    aux=a;
    a=b;
    b=aux;
    printf("El valor de la direccion de a es %d\n", &a);
    printf("El valor de la direccion de a es %d\n", &b);
}



int main(void){
    int a=15;
    int b=20;

    cambiarsin(a,b);
    printf("El valor de a es %d\n",a);
    printf("El valor de b es %d\n",b);

    cambiar(&a,&b);
    printf("El valor de a es %d\n",a);
    printf("El valor de b es %d\n",b);



    return 0;
}


