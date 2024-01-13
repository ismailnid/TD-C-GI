#include <stdio.h>

int addition(int a, int b) {
    return a+b;
}

int soustraction(int a, int b) {
    return a-b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b!= 0) {
        return a/b;
    } else {
        printf("erreur\n");
        return 0;
    }
}

int modulo(int a, int b) {
    if (b != 0) {
        return a% b;
    } else {
        printf("erreur \n");
        return 0;
    }
}




int main() {
    int a,t2,b;
    char op, t='O';
    int resu;

     while (t=='o'||t=='O') {
        printf("Entrez une expression (ex: 2 + 5): ");
        scanf("%d%c%d", &a, &op, &b);

        
        switch (op) {
            case '+':
                resu =addition(a, b);
                break;
            case '-':
                resu =soustraction(a,b);
                break;
            case '*':
                resu = multiplication(a,b);
                break;
            case '/':
                    resu = division(a, b);
                break;
            case '%':
                    resu = modulo(a,b);
                break;
            default:
            	t2=1;
                printf("Operateur invalide \n");
                break;
        }

    
    if(t2!=1)
	 printf("le resultat: %d \n", resu);
	printf("Voulez-vous recommencer ? (O/N) : ");
      scanf(" %c", &t);
	}
   
    return 0;
}
