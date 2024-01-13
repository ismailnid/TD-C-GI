#include <stdio.h>


int Dixcaracteres(char *nom) {
	int n=0,i=0;
    while (nom[i]!='\0'){
    	n++;
    	i++;
	}
	if (n> 10)
    return 0;
    else 
     return 1;
}
int strcmp(char s1[20], char s2[20]) {
    while (s1[0] != '\0' && s2[0] != '\0' && s1[0] == s2[0]) {
        s1++;
        s2++;
    }

    if (s1[0] == s2[0]) {
        return 0; 
    } else if (s1[0]< s2[0]) {
        return -1;  
    } else {
        return 1; 
    }
}

void lirenom(char *nom) {
    printf("Entrez un nom ('fin' pour terminer) : ");
    scanf("%s", nom);
}

int main() {
    char noms[20][20]; 
    int nb= 0,i=0,n;

    for (i = 0; i < 20; i++) {
        lirenom(noms[i]);

        
	if (strcmp(noms[i], "fin") == 0) {
            break;
        }
     n=Dixcaracteres(noms[i]);
    if (n==1) {
            nb++;
        }
    }

    printf("Nombre de noms avec plus de dix caractères : %d\n", nb);

    return 0;
}

