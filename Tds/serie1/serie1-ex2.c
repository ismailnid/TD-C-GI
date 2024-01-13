#include<stdio.h>
int main (){
char op ;
int age;
char sexe;
int t=1;

printf("Donnez l'age  :"); scanf ("%d",&age);
printf("Donner le sexe (M,F) :"); scanf (" %c",&sexe);
if (age>20&&sexe=='M')
printf("paient l'impot");
else {
  if (age>18&& age<35 &&sexe=='F')
printf("paient l'impot");
 else 
printf("ne paient pas l'impot");}
return 0;
}		

