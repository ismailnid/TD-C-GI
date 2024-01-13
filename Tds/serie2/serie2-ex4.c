#include <stdio.h>
int longueur_chaine1(char t[20]){
	int i,n=0;
	while(t[i]!='\0'){
		n++;
		i++;
	}
	return n;
}
int main() {
	char cTab1[20],cTab2[20];
	int n;
	printf("entree le chain de carateres cTab1 :");
	gets(cTab1);
	printf("entree le chain de carateres cTab2 :");
	gets(cTab2);
	n=longueur_chaine1(cTab1);
	printf("le nombre caractere de chain de carateres cTab1 est: %d\n",n);
	n=longueur_chaine1(cTab2);
	printf("le nombre caractere de chain de carateres cTab2 est: %d \n",n);
	
	
return 0;
}
