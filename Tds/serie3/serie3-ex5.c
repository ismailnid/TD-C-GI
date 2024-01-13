#include <stdio.h>
#include <string.h>
int frequence(char *phrase, char *mot) {
    int f = 0,i,n;
    int lp = strlen(phrase);
    int lm = strlen(mot);
    n=lp-lm;
    for (i = 0; i <= n; i++) {
        
        if (strncmp(phrase + i, mot, lm) == 0) {
          
            if ((i + lm == lp) || (phrase[i + lm]==' ')) {
                f++;
            }
        }
    }

    return f;
}

int main() {
	 char phrase[1000];
    char mot[100];
    int f;
    
    printf("entrez une phrase : ");
    gets(phrase);
    printf("entrez le mot  : ");
    gets(mot);
    
    f = frequence(phrase, mot);
    printf("le mot  \"%s\"  apparait  %d  fois dans la phrase \n", mot,f);

    return 0;
}
