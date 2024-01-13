#include <stdio.h>

typedef struct Etudiant {
    char nom[15], prenom[15];
    int CNE;
    float notes[4], moyenne;
} Etd;

void afficherEtd(Etd etudiant) {
    printf("Nom : %s\n", etudiant.nom);
    printf("Prenom : %s\n", etudiant.prenom);
    printf("CNE : %d\n", etudiant.CNE);
    printf("Moyenne : %.2f\n", etudiant.moyenne);
    printf("\n");
}

Etd gmoyenne(Etd *T) {
    Etd Max = T[0];
    int i;
    for (i = 1; i < 5; i++) {
        if (T[i].moyenne > Max.moyenne) {
            Max = T[i];
        }
    }

    return Max;
}

void Tridutableau(Etd *T) {
    Etd temp;
    int ind,j,i;
    for (i = 0; i < 4; i++) {
        ind = i;
        for (j = i + 1; j < 5; j++) {
            if (T[j].moyenne > T[ind].moyenne) {
                ind = j;
            }
        }
        temp = T[ind];
        T[ind] = T[i];
        T[i] = temp;
    }
}

int main() {
    Etd T[5], Max;
    int i,j;
    for (i = 0; i < 5; i++) {
        printf("l'etudiant %d :\n", i + 1);
        printf("Nom : ");
        scanf("%s", T[i].nom);
        printf("Prenom : ");
        scanf("%s", T[i].prenom);
        printf("CNE : ");
        scanf("%d", &T[i].CNE);
        for (j = 0; j < 3; j++) {
            printf("Note %d: ", j + 1);
            scanf("%f", &T[i].notes[j]);
        }

        T[i].moyenne = (T[i].notes[0] + T[i].notes[1] + T[i].notes[2]) / 3.0;
    }

    printf("L'etudiant avec la plus grande moyenne est :\n");
    Max = gmoyenne(T);
    afficherEtd(Max);

    Tridutableau(T);

    printf("Tableau trie en ordre decroissant selon la moyenne :\n");
    for (i = 0; i < 5; i++) {
        afficherEtd(T[i]);
    }

    return 0;
}

