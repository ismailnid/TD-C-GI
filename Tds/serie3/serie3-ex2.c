#include <stdio.h>


int main() {
    char *nom ;
    char *pd;
    int temp=0;
    char *pf;
    nom = (char *)malloc(30 * sizeof(char));

    printf("entrez un nom : ");
    scanf("%s", nom); 
    pd = nom;
    pf = nom + strlen(nom) - 1;
    while (pd < pf){
    if (*pd==*pf)
    temp=1;
    else 
     break;

    
	pf--;
	pd++;	
	}
	if (temp==1)
    printf("%s est un palindrome \n", nom);
    else 
    printf("%s n'est pas un palindrome\n", nom);
    free(nom);

    return 0;
}


