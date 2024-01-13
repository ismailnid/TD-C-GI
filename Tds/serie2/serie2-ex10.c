#include<stdio.h>
#include <string.h>
int distanceH(char* S1, char* S2) {
    int dis = 0,i;
    for (i = 0; i < strlen(S1); i++) {
        if (S1[i] != S2[i]) {
            dis++;
        }
    }
    
    return dis;
}
int distanceH_langage(char** langage, int n) {
    int mindis,i,j,dis;
     mindis= distanceH(langage[0], langage[1]);
    for ( i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            dis = distanceH(langage[i], langage[j]);
            if (dis < mindis) {
                mindis = dis;
            }
        }
    }
    return mindis;
}

char* binaire(int N) {
    char bn[9];
    int i, temp;
    for (i = 0; i < 8 ; i++) {
        bn[i] = N % 2 + '0';
        N=N/2;
    }
    bn[i] = '\0';
    for (i = 0; i < 4; i++) {
        temp = bn[i];
        bn[i] = bn[7 - i];
        bn[7 - i] = temp;
    }
    return bn;
}
int distanceNombre(int A, int B) {
    char *bA;
    char *bB ;
    bA = binaire(A);
    bB = binaire(B);
    printf("\n%s",bA);
    printf("\n%s\n",bB);
    return distanceH(bA,bB);
}

int main() {
	
    char ch1[] = "aabbcc";
    char ch2[] = "xaybzc";
    int n,a=7,b=4;
    char *langage[] = {"aabb", "xayy", "tghy", "xgyy"};
    printf("Distance de Hamming entre \"%s\" et \"%s\" : %d\n", ch1, ch2, distanceH(ch1, ch2));
     n = 3;
    printf("Distance de Hamming du langage : %d\n", distanceH_langage(langage, n));
    printf("Distance de Hamming entre les nombres %d et %d : %d\n",a , b, distanceNombre(a, b));
    
    return 0;
}


