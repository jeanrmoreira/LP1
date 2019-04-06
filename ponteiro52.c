#include <stdio.h>

void compra (int* conta, int valor) {
         *conta=*conta-valor;
          }


int main (void) {

 int c1;
 int c2;
 int* conta;

 printf("Digite o saldo da primeira conta: ");
 scanf("%d",&c1);
 printf("Digite o saldo da segunda conta: ");
 scanf("%d",&c2);

 if (c1>c2){
         conta=&c1;
      }
 else {
         conta=&c2;
     }
     
  compra(conta, 500);
  printf("Saldo da primeira conta:  %d\n",c1);
  printf("Saldo da segunda conta:  %d\n",c2);
  return 0;
}
