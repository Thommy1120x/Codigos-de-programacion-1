#include<stdio.h>

int menu (int opc){
    printf ("Que operacion desea hacer.\n1.Suma\n2.resta\n3.multiplicacion\n4.division\n5.Suma arreglo con escalar\n6.comparar arreglo\n7.Suma con escalar cambiando la posicion\n");
    scanf("%d",& opc);
    return opc;
}

void suma(float* a, float* b, float* r){
    *r = *a + *b;
    
}

void resta(float* a, float* b, float* r){
    *r = (*a) - (*b);
    
}

void multiplicacion(float* a, float* b, float* r){
    *r = (*a) * (*b);

}

void division(float* a, float* b, float* r){
    if (*b!=0){
        *r = *a / *b;
    } else {
        printf("No es posible dividir para 0");
    }
    
}


void sumaarregloescalar (float* arreglo, int tamano,  float escalar){
    for (int i=0 ;i<tamano ; i++ ){
        *arreglo=*arreglo + escalar;
        arreglo++;
    }
}

void sumaarregloescalar2 (float* arreglo, int tamano,  float escalar){
    for (int i=0 ;i<tamano ; i++ ){
        *(arreglo+1)=*arreglo + escalar;
        arreglo++;
    }
}

void datos_comparacion(float* comparar1 , float* comparar2, int t) {
        if(*comparar1==*comparar2){
            printf("La cadena es igual\n");
        } else {
            printf ("La cadena es distinta\n");
        }

}   



