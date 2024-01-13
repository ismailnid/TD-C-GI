#include <stdio.h>


int main() {
	int i,j;
    char cMessage[10];
    printf("entre une message :");
    gets(cMessage);
    for (i = 0; cMessage[i] !='\0'; i++) {
     if (cMessage[i] >='A' && cMessage[i]<='Z')
        cMessage[i]= ((cMessage[i]-'A'+5)%26)+'A';
   
     else if (cMessage[i]>='a' && cMessage[i]<='z')
        cMessage[i] = ((cMessage[i] - 'a' + 5) % 26) + 'a';
    
    }

    // Imprimer le résultat
    printf("Message crypte : %s\n", cMessage);

    return 0;
}

