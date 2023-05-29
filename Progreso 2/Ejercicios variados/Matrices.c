#include <stdio.h>
#define n 3
#define m 3
int main (void)
{
    int matrizA[n][m];
    int matrizB[n][m];
    int matrizC[n][m];
    int traspuesta [n][m];
    int escalar;
    //matriz A
    printf ("Matriz A\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf ("Ingrese el numero el la posicio %d,%d  ", i, j);
            scanf ("%d",&matrizA[i][j]);
        }
    }

    //Matriz B
    printf("Matriz B\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf ("Ingrese el numero el la posicio %d,%d  ", i, j);
            scanf ("%d",&matrizB[i][j]);
        }
    }

    //Suma de matrices
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            matrizC[i][j]=matrizA[i][j]+matrizB[i][j];
        }
    }

    
    printf ("Matriz suma\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf (" %d ", matrizC[i][j]);
        }
        printf("\n");
    }

    //traspuesta de matriz A
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            traspuesta[i][j]=matrizA[j][i];
        }
    }

    printf ("Matriz traspuesta\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf (" %d ",traspuesta[i][j]);
        }
        printf("\n");
    }

    //Multiplicar por un escalar
    printf ("Ingrese un valor escalar\n");
    scanf ("%d",&escalar);
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            matrizA[i][j]=matrizA[i][j]*escalar;
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf(" %d ", matrizA[i][j]);
        }
        printf ("\n");
    }


}