#include <stdio.h>

void enleverBlancs(char *phrase) {
    int i, j, debutMot;

    // Enlever les blancs au début
    i = 0;
    while (phrase[i] == ' ' || phrase[i] == '\t') {
        i++;
    }
    debutMot = i;
    j = 0;
    while (phrase[i] != '\0') {
        phrase[j++] = phrase[i++];
    }
    phrase[j] = '\0';

    // Laisser un seul blanc entre les mots
    for (i = debutMot; phrase[i] != '\0'; i++) {
        if ((phrase[i] == ' ' || phrase[i] == '\t') &&
            (phrase[i + 1] == ' ' || phrase[i + 1] == '\t')) {
            continue; // Ignorer les espaces consécutifs
        }
        phrase[j++] = phrase[i];
    }
    phrase[j] = '\0';
}

int main() {
    char phrase[1000];

    // Demander à l'utilisateur de saisir une phrase
    printf("Entrez une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);

    // Enlever les blancs au début et entre les mots
    enleverBlancs(phrase);

    // Afficher la phrase modifiée
    printf("Phrase après modification : %s\n", phrase);

    return 0;
}

