#include <stdio.h>
int main(){
int a ,i,temp=0;
printf("entrez le nombre : "); scanf("%d", &a);
for(i=2;i<=(a/2);i++){
	if(a%i==0)
	temp=1;
}
if(a==2|| temp==0)
 printf("le nombre %d est premier",a);
else 
 printf("le nombre %d n'est pas premier",a);
 


return 0;
}
