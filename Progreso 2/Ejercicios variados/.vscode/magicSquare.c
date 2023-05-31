#include <stdio.h>
#include "magicSquare.h"

int cuadradoMagico(int filas, int columnas, int cuadrado[filas][columnas]) {
    int sumamagica;
    int sumafila;
    int i;
      for (int i=0; i<filas; i++)
    {
        sumamagica=0;
        for (int j=0; j<columnas; j++)
        {
            sumamagica=sumamagica+cuadrado[i][j]; 
        }
        if (sumafila != sumamagica) {
            return 0;
        }
    }

    for (int i = 0; i < 3; i++) {
        int suma_columna = 0;
        for (int j = 0; j < 3; j++) {
            suma_columna += cuadrado[j][i];
        }
        if (suma_columna != sumamagica) {
            return 0;
        }
    }

    int suma_diagonal_principal = cuadrado[0][0] + cuadrado[1][1] + cuadrado[2][2];
    int suma_diagonal_secundaria = cuadrado[0][2] + cuadrado[1][1] + cuadrado[2][0];
    if (suma_diagonal_principal != sumamagica || suma_diagonal_secundaria != sumamagica) {
        return 0; 
    }
    
}

int calcularConstanteMagica(int filas, int columnas, int cuadrado[filas][columnas]) {
    int sumamagica;
    sumamagica=0;
     for (int i=0; i<filas; i++)
    {
        for (int j=0; j<columnas; j++)
        {
          sumamagica=sumamagica+cuadrado[i][j];  
        }
    }        
    
}

void imprimirCuadrado(int filas, int columnas, int cuadrado[filas][columnas]) {
     for (int i=0; i<filas; i++)
    {
        for (int j=0; j<columnas; j++)
        {
             printf (" %d ", cuadrado[i][j]);
        }
        printf("\n");
    }
}