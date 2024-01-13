#include <stdio.h>

typedef struct date {
    int jour;
    char mois[10];
    int annee;
}date;

typedef struct employe {
    char nom[15];
    char prenom[15];
    struct date date_naissance; struct date date_embauche;
}employe;


int main() {
    employe t[4];
    int i;
    
    for (i = 0; i < 4; i++) {
        printf("Employe numero : %d\n", i);
        printf("Nom : "); scanf("%s", t[i].nom);
        printf("Prenom : ");scanf("%s", t[i].prenom);
        printf("-----Date de naissance-----\n : ");
        printf("jour:");  scanf("%d", &t[i].date_naissance.jour);   printf("mois:"); scanf("%s", t[i].date_naissance.mois);  printf("annee"); scanf("%d", &t[i].date_naissance.annee);
        printf("-----Date d'embauche-------\n  ");
        printf("jour:");  scanf("%d", &t[i].date_embauche.jour);   printf("mois:"); scanf("%s", t[i].date_embauche.mois);  printf("annee"); scanf("%d", &t[i].date_embauche.annee);
        printf("\n");
    }
    printf("Liste des employes :\n");
    for (i = 0; i < 4; i++) {
        printf("Employe %d\n", i);
        printf("Nom : %s\n", t[i].nom);
        printf("Prénom : %s\n", t[i].prenom);
        printf("Date de naissance : %d %s %d\n", t[i].date_naissance.jour, t[i].date_naissance.mois, t[i].date_naissance.annee);
        printf("Date d'embauche : %d %s %d\n", t[i].date_embauche.jour, t[i].date_embauche.mois, t[i].date_embauche.annee);
        printf("\n");
    }
    
    return 0;
    }


