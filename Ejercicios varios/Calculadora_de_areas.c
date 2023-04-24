#include<stdio.h>
#include<math.h>

float Area_circulo (int radio){
    float area_circulo;
    
    if (radio<1){
        printf ("No es posible calcular valores negativos\n");
    } else {
        area_circulo = 3.14 * radio;   
        printf ("El area del circulo es igual %.2f\n", area_circulo);
    }
}

float Area_triangulo (int base, int altura){
    float area_triangulo;
    area_triangulo = (base * altura) / 2;
    printf ("La base del triangulo es %.2f\n", area_triangulo);
}

int Area_rectangulo (int base, int altura){
    int area_rectangulo;
    area_rectangulo = base * altura;
    printf ("El area del rectangulo es %d\n", area_rectangulo);
}

int Area_cuadrado (int base, int altura){
    int area_rectangulo;
    area_rectangulo = pow (base,2);
    printf ("El area del cuadrado es %d\n", area_rectangulo);
}

float Area_trapecio (int base1, int base2, int altura){
    float area_trapecio;
    area_trapecio = (base1 + base2) / 2 * altura;
    printf ("El area del trapecio es igual a %.2f\n", area_trapecio);
}


int main (){
    int base, altura, radio, base1, base2, opcion;
    do {
    printf ("Que area desea calcular\n 1.Circulo\n 2.Triangulo\n 3.Rectangulo\n 4.Cuadrado\n 5.Trapecio\n 6.Salir\n");
    scanf ("%d",&opcion);
    switch (opcion){
        case 1:
        printf ("Ingrese el area del radio\n");
        scanf ("%d",&radio);
        Area_circulo (radio);
        break;

        case 2:
        printf ("Ingrese la base del triangulo\n");
        scanf ("%d",&base);
        printf ("Ingrese la altura del triangulo\n");
        scanf ("%d",&altura);
        Area_triangulo (base, altura);
        break;

        case 3:
        printf ("Ingrese la base del rectangulo\n");
        scanf ("%d",&base);
        printf ("Ingrese la altura del rectangulo\n");
        scanf ("%d",&altura);
        Area_rectangulo (base, altura);
        break;
        
        case 4:
        printf ("Ingrese la base del cuadrado\n");
        scanf ("%d",&base);
        Area_cuadrado (base, altura);
        break;

        case 5:
        printf ("Ingrese el valor de la primera base");
        scanf ("%d",& base1);
        printf ("Ingrese el valor de la segunda base");
        scanf ("%d",& base2);
        printf ("Ingrese el valor de la altura");
        scanf ("%d",& altura);
        Area_trapecio (base1, base2, altura);
        break;
        
        case 6:
        printf ("Usted a salido de la calculadora");
    }
    }
    while (opcion != 6);

}

