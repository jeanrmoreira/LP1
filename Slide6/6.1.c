#include <stdio.h>

void preenche(int* xs, int n) {
     int i;
     for (i = 0; i < n; i++) {
          printf("Digite um numero: ");
          scanf("%d",&*(xs+i));
     }
}

float media(int* xs, int n) {
     int i;
     float soma=0;
     float media=0;
     for (i = 0;i < n;i++) {
          soma+=*(xs+i);
     }
     media = soma/n;
     return media;
}

int main (void) {
     int vec[100];
     int n;
     float m;
     printf("Digite o tamanho do vetor: ");
     scanf("%d",&n);
     preenche(vec,n);
     m = media(vec,n);
     printf("a media eh %f\n",m);
     return 0;
}

