#include <stdio.h>

int main() {
int INB_jours[12];
int i;
    for(i=0;i<12;i++){
    	if (i==2)
    	INB_jours[i]=28;
    	else {
			if ((i%2==0&&i<=7)||(i%2!=0&&i>7))
    		INB_jours[i]=30;
			else 
			INB_jours[i]=31;	}
	}

	printf("Entrer le mois (1-12) : ");
	scanf("%d", &i);
	
    if (i < 1 || i > 12) {
        printf("Mois invalide\n");
        scanf("%d", &i);
    }
    printf("Le mois %d a %d jours", i, INB_jours[i]);
	




return 0;
}
