#include<stdio.h>


int main(){
	int nb;
	float prix;
printf("Donner le nombre de photocopies :"); scanf ("%d",&nb);
prix = nb;
if (nb<20&& nb>10)
prix=0.6*nb;
else if (nb>=20) 
prix=0.4*nb;

if (nb>=0)
printf("la facture de photocopies est : %.4f DH",prix);
else 
printf("le nombre de photocopies est erreur ");	
	
	
	return 0;
}
