#include <stdio.h>

void compra (int* conta, int valor) {
         *conta=*conta-valor;
          }


int main (void) {

 int c1;
 int c2;
 int i;
 int compras[] = {100, 50, 80, 30, 20 };
 int* conta;

 printf("Digite o saldo da primeira conta: ");
 scanf("%d",&c1);
 printf("Digite o saldo da segunda conta: ");
 scanf("%d",&c2);

 for (i=0;i<5;i++) {

             if (c1>c2){
                   conta=&c1;
            }
             else {
                   conta=&c2;
          }
            
            compra(conta, compras[i]);
            printf("Novo saldo da primeira conta:  %d\n",c1);
            printf("Novo saldo da segunda conta:  %d\n",c2);
   }
  return 0;
}
