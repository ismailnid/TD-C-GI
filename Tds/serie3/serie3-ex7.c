#include <stdio.h>

int rechercher(float t[], int n, float valeur) {
	int i;
    for (i = 0; i < n; i++) {
        if (t[i] == valeur) {
            return i;
        }
       }
      return -1; 
}

int main() {
    int n,pos,i;
    float t[20];
    float valeur;
    
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

   
    printf("Entrez les element du tableau :\n");
    for (i = 0; i < n; i++) {
        printf("t[%d]= ", i);
        scanf("%f", &t[i]);
    } 

    printf("Entrez la valeur à rechercher : ");
    scanf("%f", &valeur);

     pos = rechercher(t, n, valeur);

    if (pos != -1) {
        printf("La valeur %f a ete trouvee à la position %d.\n", valeur, pos);
    } else {
        printf("La valeur %f n'a pas ete trouvee dans le tableau.\n", valeur);
    }

    return 0;
}

