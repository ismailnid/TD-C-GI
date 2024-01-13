#include <stdio.h>

typedef struct {
    char nom[30];
    char prenom[30];
    char telephone[15];
} contact;


void afficher(contact p) {
    printf("Nom : %s\n", p.nom);
    printf("Prenom : %s\n", p.prenom);
    printf("Telephone : %s\n", p.telephone);
    printf("\n");
}

int main() {
     int i,nb=0,t;
    contact tb[10];

    int choix;
    int n= 0; 

    do {
        printf("1. Ajouter une contact\n");
        printf("2. Afficher toutes les contact \n");
        printf("3. Quitter\n");
        printf("Choisissez une option(1 2 3) : ");
        scanf("%d", &t);

        switch (t) {
            case 1:
                printf("Nom : "); scanf("%s", tb[n].nom);
                printf("Prenom : ");
                scanf("%s", tb[n].prenom);
                printf("Telephone : ");
                scanf("%s", tb[n].telephone);
                n++;
                break;
            case 2:
                for (i = 0; i < n; i++) {
                    afficher(tb[i]);
                }
                break;
            case 3:
                break;
            default:
                printf("Option invalide");
        }
    } while (t!= 3);

    return 0;
}

