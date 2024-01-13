#include <stdio.h>

typedef struct {
    float real;
    float image;
} cmpx;


float imag(cmpx z) {
    return z.image;
}

float real(cmpx z) {
    return z.real;
}

cmpx mul(cmpx z1, cmpx z2) {
    cmpx resu;
    resu.real = z1.real * z2.real - z1.image * z2.image;
    resu.image = z1.real * z2.image + z1.image * z2.real;
    return resu;
}



void imagef(cmpx *z, float *res) {
    *res = z->image;
}

void realf(cmpx *z, float *res) {
    *res = z->real;
}

void mulf(cmpx *z1, cmpx *z2, cmpx *resu) {
    resu->real = z1->real * z2->real - z1->image * z2->image;
    resu->image = z1->real * z2->image + z1->image * z2->real;
}




int main() {
    cmpx a = {2, 1};
    cmpx b = {2, -1};
    cmpx resu;
    int t;
    float imager, realr,imager2,realr2;
    
    
    printf(" 1: fonctions avec passage par valeur \n   2: fonctions avec passage par adresse \n");
    printf("entrez le numero de question : "); scanf("%d",&t);
    switch (t){
     case 1:
     imager = imag(a);
     realr = real(a);
     resu = mul(a, b);
  
       break ;
     case 2:
 
    imagef(&a, &imager);
    realf(&a, &realr);
    mulf(&a, &b, &resu);

      break ;
}
    printf("Partie imaginaire de a : %.2f\n", imager);
    printf("Partie reelle de a : %.2f\n", realr);
    printf("Multiplication de a et b  : %.2f + %.2fi\n", resu.real, resu.image);

    return 0;
}

