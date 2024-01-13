#include <stdio.h>

char* enleverBlancs(char *phrase) {
    int i, j, t;

    i = 0;
    while (phrase[i] == ' ') {
        i++;
    }
    t = i;
    j = 0;
    while (phrase[i] != '\0') {
        phrase[j] = phrase[i];
        j++;
        i++;
    }
    
    j=0;
    for (i = t; phrase[j] !='\0'; i++) {
        if ((phrase[i] == ' ') && (phrase[i+1] ==' ')) {
          j++;
        }
        phrase[i] = phrase[j++];
    }
    phrase[i] = '\0';
    
    return phrase;
}

int main() {
    char phrase[200];
    char *resu;
    printf("entrez une phrase : ");
    gets(phrase);


    resu=enleverBlancs(phrase);


    printf("Phrase apres enlever Blancs :%s\n", resu);

    return 0;
}

