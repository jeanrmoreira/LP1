#include <stdio.h>

int main (void) {

   int a;
   int b;
   int* p;

   printf("Digite a: ");
   scanf("%d",&a);
   printf("Digite b: ");
   scanf("%d",&b);
   printf("Valor de a antes = %d\n",a);
   printf("Valor de b antes = %d\n",b);

   if (a>b){
     p=&a;
 }
    else if (b>a){
      p=&b;
     }
    else {
      printf("Numeros Iguais\n");
       }
 
     *p=*p-50;

    printf("Valor de a depois = %d\n",a);
    printf("Valor de b depois = %d\n",b);

   return 0;
  }
