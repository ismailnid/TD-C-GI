#include <stdio.h>

typedef struct produit {
    int reference;
    float prix;
    int quantite;
    int code;
}produit;

void saisirproduit(struct produit *pd) {
    printf("Saisie d'un produit électronique :\n");
    printf("Reference : ");
    scanf("%d", &(pd->reference));
    printf("Prix (DH) : ");
    scanf("%f", &(pd->prix));
    printf("Quantite disponible : ");
    scanf("%d", &(pd->quantite));
    printf("Code produit (1 pour carte mere, 2 pour processeur, 3 pour barrette memoire, 4 pour carte graphique) : ");
    scanf("%d", &(pd->code));
}
void afficherproduit(struct produit pd) {
    printf("Produit electronique :\n");
    printf("Reference : %d\n", pd.reference);
    printf("Prix : %.2f DH\n", pd.prix);
    printf("Quantité disponible : %d\n", pd.quantite);

    switch (pd.code) {
        case 1:
            printf("Type de produit : Carte mere\n");
            break;
        case 2:
            printf("Type de produit : Processeur\n");
            break;
        case 3:
            printf("Type de produit : Barrette memoire\n");
            break;
        case 4:
            printf("Type de produit : Carte graphique\n");
            break;
        default:
            printf("Type de produit inconnu\n");
            break;
    }
}

void saisirCommande(struct produit pd) {
    int q;
    float prixT;
    printf("Saisie d'une commande pour le produit :\n");
    printf("Quantité commandée : ");
    scanf("%d", &q);

    if (q> 0 && q<= pd.quantite) {
        prixT = q* pd.prix;
        printf("Commande :\n");
        printf("Produit reference : %d\n", pd.reference);
        printf("Quantite commandee : %d\n", q);
        printf("Prix total : %.2 f DH\n", prixT);
    } else {
        printf("Quantite non disponible en stock.\n");
    }
}

int main() {
    struct produit pd;
    saisirProduit(&pd);
    afficherProduit(pd);
    saisirCommande(pd);

    return 0;
}

