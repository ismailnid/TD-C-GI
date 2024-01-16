#include <stdio.h>

int nb_occurrence(char T[], int n, char c) {
    int nbr = 0, p_occ = -1, i, d_occ = -1;
    for (i = 0; i < n; i++) {
        if (T[i] == c) {
            nbr++;
            if (p_occ == -1) {
                p_occ = i;
            }

            d_occ = i;
        }
    }

    return nbr;
}

int pos_car(char T[], int n, char c, int *p_occ, int *d_occ) {
    int nbr = 0, i;
    *p_occ = -1;
    *d_occ = -1;
    for (i = 0; i < n; i++) {
        if (T[i] == c) {
            nbr++;
            if (*p_occ == -1) {
                *p_occ = i;
            }

            *d_occ = i;
        }
    }

    return nbr;
}

int main() {
    char c;
    int n, nbr, p_occ, d_occ;
    char T[10];
    n = 10;
    printf("donnez un mot : ");
    scanf("%s", T);
    printf("donnez le caractere : ");
    scanf(" %c", &c);

    nbr = pos_car(T, n, c, &p_occ, &d_occ);

    printf("Le caractere '%c' apparait %d fois. Premiere occurrence a l'indice %d, derniere occurrence a l'indice %d.\n", c, nbr, p_occ, d_occ);

    return 0;
}

