#include <stdio.h>
int main (void) {
 int n1;
 int n2;
 int i;
 int maior;
 int menor;
 
 printf("Primeiro numero: ");
 scanf("%d",&n1);
 printf("Segundo numero: ");
 scanf("%d",&n2);
 if (n1>n2) {
  maior=n1;
  menor=n2;
  }
 if (n2>n1) {
  maior=n2;
  menor=n1;
  }
 
 for (i=maior-1;i>=menor;i--) {
 if(i%2==0) {
 printf("%d\n",i);
 }
 } 
    return 0;
  }
   
