#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include"dolittle.h"

int main()
{
    float A[20][20];
    float L[20][20];
    float U[20][20];
    int   taille;
    printf("\n");
    printf("--------------------------------------*********************************----------------------------------\n");
    printf("\t\tNB : Durant tout l'exercice nous travaillerons avec des matrices carees:\n");
    printf("--------------------------------------*********************************----------------------------------\n");
    printf("donner la taille du tableau:\n");
    scanf("%d",&taille);
    saisie(A[20][20],taille);
    printf("Vous avez la matrice suivante:\n");
    affichage(A[20][20],taille);
    printf("\n");
    printf("L=:\t");
    decomposition(A[20][20],taille);
    L[20][20]= affichage(L[20][20],taille);
    U[20][20]= affichage(U[20][20],taille);




    return 0;
}
