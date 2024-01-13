#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *nom ;
    char *pd;
    char temp;
    char *pf;
    nom = (char *)malloc(30 * sizeof(char));

    printf("entrez un nom : ");
    scanf("%s", nom); 
    pd = nom;
    pf = nom + strlen(nom) - 1;
    while (pd < pf){
    temp=*pd;
    *pd = *pf;
    *pf = temp;
	pf--;
	pd++;	
	}
    printf("Nom inverse : %s\n", nom);

    free(nom);

    return 0;
}

