#include <stdio.h>
#include <string.h>

void saisir(char *ch) {
    printf("Entrez une chaine de caracteres : ");
    gets(ch);
}

void afficher(char *ch) {
    printf("La chaine est : %s\n", ch);
}

void inverse(char *ch) {
    int i, j;
    char temp;

    for (i = 0, j = strlen(ch) - 1; i < j; i++, j--) {
        temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
    }

    printf("La chaine inversee est : %s\n", ch);
}

int mots(char *ch) {
    int i, cmp = 0;
    char temp = ' ';

    for (i = 0; ch[i] != '\0'; i++) {
        if (ch[i] !=' ' && temp ==' ') {
            cmp++;
        }
        temp = ch[i];
    }
    return cmp;
}

int main() {
    char ch[100];
    int t, nb;

    do {
        printf("Menu:\n");
        printf("1. Saisir une chaine\n");
        printf("2. Afficher la chane\n");
        printf("3. Inverser la chaine\n");
        printf("4. Compter les mots\n");
        printf("0. Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &t);

        switch (t) {
            case 1:
                getchar(); // Pour consommer le caractère de nouvelle ligne restant
                saisir(ch);
                break;
            case 2:
                afficher(ch);
                break;
            case 3:
                inverse(ch);
                break;
            case 4:
                nb = mots(ch);
                printf("Nombre de mots : %d\n", nb);
                break;
            case 0:
                break;
            default:
                printf("Option invalide\n");
                break;
        }

        printf("frapper  une touche pour revenir au menu\n");
        getchar(); 
    } while (t != 0);

    return 0;
}

