#include <stdio.h>

typedef struct panneau {
    int larg;
    int longu;
    int epaisseur;
    int typeB;
}panneau;

void saisirPanneau(struct panneau *pn) {
    printf("Saisie d'un panneau de bois :\n");
    printf("Largeur (mm) : ");
    scanf("%d", &(pn->larg));
    printf("Longueur (mm) : ");
    scanf("%d", &(pn->longu));
    printf("Epaisseur (mm) : ");
    scanf("%d", &(pn->epaisseur));
    printf("Type de bois (0 pour Pin, 1 pour Chene, 2 pour Hetre) : ");
    scanf("%d", &(pn->typeB));
}

void afficherPanneau(struct panneau pn) {
    printf("Panneau de bois :\n");
    printf("Largeur : %d mm\n", pn.larg);
    printf("Longueur : %d mm\n", pn.longu);
    printf("Epaisseur : %d mm\n", pn.epaisseur);
    
    switch (pn.typeB) {
        case 0:
            printf("Type de bois : Pin\n");
            break;
        case 1:
            printf("Type de bois : Chene\n");
            break;
        case 2:
            printf("Type de bois : Hetre\n");
            break;
        default:
            printf("Type de bois inconnu\n");
            break;
    }
}
float Volume(struct panneau pn) {
    float vl;
    vl = (pn.larg / 1000.0) * (pn.longu / 1000.0) * (pn.epaisseur / 1000.0);  
    return vl;
}

int main() {
    struct panneau pn;
    saisirPanneau(&pn);
    afficherPanneau(pn);
    printf("Volume : %.4f metre-cube\n",Volume(pn));

    return 0;
}

