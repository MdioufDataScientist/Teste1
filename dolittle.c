#include<stdio.h>
/*---------------------------------------------------------------------------------------------------------------*/
/*LA SAISIE DU TABLEAU*/
void saisie(float A[20][20],int taille)
{
    int i,j;
for(i=0;i<taille;i++)
    for(j=0;j<taille;j++)
        {
            printf("A[%d,%d]=",i,j);
            scanf("%f",&A[i][j]);
        }
}
/* FIN DE LA SAISIE*/

/*--------------------------------------------------------------------------------------------------------------*/

/*AFFICHAGE DU TABLEAU*/
void affichage(float A[20][20],int taille )
{
     int i,j;
    for(i=0;i<taille;i++)
    {
            printf("\n");
        for(j=0;j<taille;j++)
        {
            printf("\t%.1f  ",A[i][j]);
        }
    }
}
/* FIN DE L'AFFICHAGE*/
/*------------------------------------------------------------------------------------------------------------------*/

/*DECOMPOSITION DE [A] EN [L] ET [U]*/
void decomposition(float A[20][20],int taille)
{
    float L[20][20]= {0}, U[20][20];
    int i,j,k;
    for(i=0;i<taille;i++)
        {
           for(j=0;j<taille;j++)
            {
               if(i<=j)
            {
                U[i][j]=A[i][j];
                 for(k=0; k<i-1; k++)
                    U[i][j]-=L[i][k]*U[k][j];
                if(i==j)
                    L[i][j]=1;
                else
                    L[i][j]=0;
            }
            else
            {
                L[i][j]=A[i][j];
                for(k=0; k<=j-1; k++)
                    L[i][j]-=L[i][k]*U[k][j];
                L[i][j]/=U[j][j];
                U[i][j]=0;
            }

            }
        }

}

/*programme de resolution d'une équation complexe*/


