#include <stdio.h>
int main(){
int a ,i,t,nb=-1,nbp=-1;

printf(" Q1: 1    Q2: 2 \n");
printf("entrez le numero de question : "); scanf("%d",&t);
switch (t){
case 1 :
 for (i = 0; i < 20; i++) {
 printf("entrez un nombre : ");
 scanf("%d", &a);
 if (a % 2 == 0&& a!=0) 
     printf("Le carrE de nombre %d est : %d\n", a, a*a);
    }
    break ;
    
case 2:
 a=0;
 while (a!=100) {
  printf("entrez un nombre :"); scanf("%d", &a);
  nb++;

  if (a % 2 == 0 && a!=0) {
    nbp++;
   printf("le carre de %d est : %d\n", a, a*a);
        }
    }
	printf("nombre total d'entrees : %d\n", nb);
    printf("nombre d'entrees paires : %d\n", nbp);
break ;	
}

return 0;
}
