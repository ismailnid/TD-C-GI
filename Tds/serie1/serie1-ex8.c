#include <stdio.h>

int main() {
	int a,i,j,t,k;
	
	printf(" a: 1    b: 2 \n");
printf("entrez le numero de question : "); scanf("%d",&t);
switch (t){
   case 1:
    printf("donner un nombre "); scanf("%d",&a);
    for (i = a; i >= 1; i--) {
        for (j = i; j >= 1; j--) {
          printf("%d", j);
        }
        printf("\n");
    }
    break ;
    case 2:
    	
 printf("donner un nombre "); scanf("%d",&a);
    for ( i = 0; i <= a; i++) {	
    for (k =0 ;k<i; k++)
        printf(" ");
        for (j =(a+1)-i ; j >= 1; j--) {
         printf("%d",i);
        }
        printf("\n");
    }
    break ;
}
    return 0;
}

