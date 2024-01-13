#include <stdio.h>

int main() {
    int a, total = 0, somme = 0, min = 0, sommep= 0, minp = 0,temp=0;


    printf("entrez une suite de nombres :\n");
    scanf("%d", &a);
    while (a != 999) {

     if (total!=0)
        scanf("%d", &a);
        
     if (a!=999)  {
	   if (total == 0)
        min = a;

       if ( a < min) {
            min = a;
        }
       if (a > 0) {
        sommep += a;
       if (total== 0)
        minp =a;
       if (a< minp) 
        minp =a;   
        }
    total++;
    somme = somme +a;
    } 
    }
    printf("Le nombre total de valeurs de la suite : %d\n", total);
    printf("La somme des valeurs lues : %d\n", somme);
    printf("Le minimum : %d\n", min);
    printf("La somme des valeurs strictement positives : %d\n", sommep);
    printf("Le minimum des valeurs strictement positives : %d\n", minp);

    return 0;
}

