#include <stdio.h>
int main(){
int a ,i,temp=0;
printf("entrez le nombre : "); scanf("%d", &a);
if (a%2==0){
printf("Nombres pairs inférieurs a %d sont :",a);
 for(i=1;i<a;i++){
	if(i%2==0)
	printf(" %d ,",i);
}

}
else 
 printf("le nombre %d est impair",a);

return 0;
}
