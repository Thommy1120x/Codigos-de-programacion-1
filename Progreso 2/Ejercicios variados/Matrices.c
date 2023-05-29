#include <stdio.h>
#define n 3
#define m 3
int main (void)
{
    int matrizA[n][m];
    int matrizB[n][m];
    int matrizC[n][m];
    printf ("Matriz A\n");

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf ("Ingrese el numero el la posicio %d,%d  ", i, j);
            scanf ("%d",&matrizA[i][j]);
        }
    }


    printf("Matriz B\n");
        for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf ("Ingrese el numero el la posicio %d,%d  ", i, j);
            scanf ("%d",&matrizB[i][j]);
        }
    }

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

    
        for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            matrizA[n][m]=matrizA[m][n];
        }
    }

    printf ("Matriz traspuesta\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            printf (" %d ", matrizA[i][j]);
        }
        printf("\n");
    }
}