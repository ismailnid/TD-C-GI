#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, pos;
    float moy = 0;
    int *t, max, min, a, n = 20;
    char temp;


    t = (int *)malloc(20 * sizeof(int));

    do {
        printf("=----Menu-----= :\n");
        printf("A. Saisie et affichage\n");
        printf("B. Moyenne\n");
        printf("C. Suppression du Max et affichage\n");
        printf("D. Suppression du Min et affichage\n");
        printf("E. Ajout d'un entier a une position donee\n");
        printf("Q. Quitter\n");
        printf("Choisissez une option (A-E ou Q) : ");
        scanf(" %c", &temp);

        switch (temp) {
            case 'A':
            	printf("Entrer le nombre d'element\n"); scanf("%d",&n);
                printf("Entrer les nombres entiers\n");
                
                for (i = 0; i < n; i++) {
                    printf("t[%d]:", i);
                    scanf("%d", &t[i]);
                }
                printf("Les 20 nombres entiers sont : ");
                for (i = 0; i < n; i++) {
                    printf("t[%d]: %d, ", i, t[i]);
                }
                printf("\n");
                break;

            case 'B':
                for (i = 0; i < n; i++) {
                    moy += t[i];
                }
                printf("Le Moyenne est : %f\n", moy / 20);
                break;

            case 'C':
                max = t[0];
                for (i = 0; i < n; i++) {
                    if (t[i] >= max)
                        max = t[i];
                }
                 printf("Max: %d, ", max);
                 pos=0;
                for (i = 0; i < n; i++) {
                   if (t[i] == max )
                    pos = i;
        }
                for ( i = pos ; i <n; i++) 
                 t[i] = t[i + 1];
                
                t = (int *)realloc(t, (n-1)* sizeof(int));
                n=n-1;
                for (i = 0; i < n; i++)
                    printf("t[%d]: %d, ", i, t[i]);
                printf("\n");
                break;

            case 'D':
                min = t[0];
                for (i = 0; i < n; i++) {
                    if (t[i] < min)
                        min = t[i];
                }
                 printf("Min: %d, ", min);
                for (i = 0; i < n; i++) {
                    if (t[i] == min)
                         pos=i;
                }
                 for ( i = pos ; i <n; i++) 
                 t[i] = t[i + 1];
                n--;    
                t = (int *)realloc(t, n * sizeof(int));
                for (i = 0; i < n; i++)
                    printf("t[%d]: %d, ", i, t[i]);
                printf("\n");
                break;

            case 'E':
                printf("Entrer l'entier : ");
                scanf("%d", &a);
                printf("Entrer la position : ");
                scanf("%d", &pos);
                
                t = (int *)realloc(t, (n+1) * sizeof(int));
                for (i = n; i > pos; i--) 
                  t[i] = t[i - 1];
    
                t[pos] = a;
                


                n++;
                for (i = 0; i < n; i++)
                    printf("t[%d]: %d, ", i, t[i]);
                printf("\n");
                break;

            case 'Q':
                break;

            default:
                printf("Choix invalide, choisir une option (A-E ou Q)\n");
        }

    } while (temp != 'Q');

    free(t);

    return 0;
}

