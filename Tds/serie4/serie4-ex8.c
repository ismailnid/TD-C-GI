#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int nb_elem;
    int *tab;
} TypeTableau;

TypeTableau CreationTableau(int n) {
    TypeTableau T;
    T.nb_elem = n;
    T.tab = (int *)malloc(n * sizeof(int));

    return T;
}

void DestructionTableau(TypeTableau T) {
    free(T.tab);
}

void SimpleLectureTableau(TypeTableau T) {
    int i;
    printf("Saisie des elements du tableau :\n");

    for (i = 0; i < T.nb_elem; i++) {
        printf("T[%d]= ", i + 1);
        scanf("%d", &(T.tab[i]));
    }
}

void Affichage(TypeTableau T) {
    int i;
    for (i = 0; i < T.nb_elem; i++) {
        printf("%d ", T.tab[i]);
    }
    printf("\n");
}

TypeTableau DoubleTableau(TypeTableau T) {
    int i;
    TypeTableau NT;
    NT.nb_elem = T.nb_elem;
    NT.tab = (int *)malloc(T.nb_elem * sizeof(int));

    for (i = 0; i < T.nb_elem; i++) {
        NT.tab[i] = 2 * T.tab[i];
    }

    return NT;
}

int main() {
    int n;
    TypeTableau T,NT;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    T = CreationTableau(n);
    SimpleLectureTableau(T);
    printf("Tableau original :\n");
    Affichage(T);
    
    NT = DoubleTableau(T);
    printf("Tableau avec elements doubles :\n");
    Affichage(NT);

    DestructionTableau(T);
    DestructionTableau(NT);

    return 0;
}

