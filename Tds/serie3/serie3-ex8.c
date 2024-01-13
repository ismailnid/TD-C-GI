#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 1 ,i,j=0;
    int t[12] ;
    int t2[12] ;
    for (i = 0; i< 12; i++){
           t[i]=0;
           t2[i]=0;
    }
    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < 12; i++) {
        printf("t[%d]= ", i);
        scanf("%d", &t[i]);
    }
    
    for (i = 0; i < 12&&t[i]!=0; i++) {
        if (t[i] == t[i + 1]) {
            count++;
        } else {
        	  t2[j++]=count;
            t2[j++]=t[i];
            count = 1;
        }
    }
    for (i = 0; i < 12&&t2[i]!=0; i++){
    printf("%d",t2[i]);	
    }
    return 0;
}

