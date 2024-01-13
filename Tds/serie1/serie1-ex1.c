#include<stdio.h>
int main (){
char op ;
float a,b;
float resu;
int t=1;

while(t==1){

printf("Donner le nombre a :"); scanf ("%f",&a);
printf("Donner le nombre b :"); scanf ("%f",&b);
printf("Donner l'operation(+,-,*,/) :"); scanf (" %c",&op);

switch (op) {
	case '+' :
		resu=a+b;
		break;
	case '-' :
		resu=a-b;
		break;
	case '*' :
		resu=a*b;
		break;
	case '/' :
		if (b==0)
		printf("impossible donner une autre nombre b non nule \n");
		else
		resu=a/b;
		break;
	default :
		break;
	}
	    if (b!=0)
		printf("le resulta est : %.2f \n",resu);
	}

return 0;
}		




