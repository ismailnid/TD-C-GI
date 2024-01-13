#include <stdio.h>

int main() {
    int a = 0;
    int t;

    do {
        printf("La valeur actuelle est : %d\n", a);

        printf("=----Menu-----= :\n");
        printf("1. Ajouter 2\n");
        printf("2. Multiplier par 3\n");
        printf("3. Soustraire 5\n");
        printf("4. Quitter\n");
        printf("Choisissez une option (1-4) : "); scanf("%d", &t);
        switch (t) {
            case 1:
                a = a+2;
                break;
            case 2:
                a= a*3;
                break;
            case 3:
                a-= a-5;
                break;
            case 4:
                break;
            default:
                printf("Choix invalide, choisir une  option une option (1-4) \n");
        }
    } while (t!= 4);

    return 0;
}

