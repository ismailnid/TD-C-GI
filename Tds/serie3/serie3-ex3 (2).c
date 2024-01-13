#include <stdio.h>
int main (){
	float t[3][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};
	float somme=0 ;
	float *p,p2;
	int i,j,temp;
		printf(" a: 1    b: 2 \n");
printf("entrez le numero de question : "); scanf("%d",&temp);
	
switch (temp){
	case 1:
		for(i=0;i<3;i++)
		  for(j=0;j<4;j++)
		    somme+=t[i][j];
		break ;
		
	case 2:
		p=&t[0][0];
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            somme += *(p + i * 4 + j);
        }
    }
		break; 	
}
printf("La somme des elements du tableau t est : %.2f\n", somme);
}
