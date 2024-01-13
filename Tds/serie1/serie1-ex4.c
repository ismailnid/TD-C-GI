#include <stdio.h>



int main() {
 float prix, remise, prixf;
    
 printf("entrez le prix initial du produit : "); scanf("%f", &prix);
 if (prix < 100) 
  remise = 0.3;
 else  { if (prix >= 100 && prix <= 200)
        remise = 0.4;
        else 
         remise = 0.5;
        }

 prixf = prix - (remise * prix);
 remise=remise * prix; 
if (prix < 0) 
        printf("veuillez entrer un nombre positif.\n");
else 
 printf("Prix initial : %.2f DH, Remise : %.2f DH, Prix final : %.2f DH\n", prix, remise, prixf);         

    return 0; 
}
