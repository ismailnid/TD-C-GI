#include <stdio.h>
#include <ctype.h>

int main() {
    int i=0,nbch = 0, nbesp= 0, nb = 0;
    char ch[20];
    printf("entrez une chaîne de caractères: ");
    gets(ch);
    while (ch[i]!='\0') {
        if (ch[i]>='0'&&ch[i]<='9') {
            nbch++;
        } else if (ch[i]==' '||ch[i]=='\t'||ch[i]=='\n') {
            nbesp++;
        } else {
            nb++;
        }
        i++;
    }

    printf("Chiffres : %d\n", nbch);
    printf("Espacement : %d\n", nbesp);
    printf("Autres : %d\n", nb);

    return 0;
}

