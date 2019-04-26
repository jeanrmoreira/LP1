#include <stdio.h>

void preenche (int arr[100][100], int l, int c){
     int i,j;
     int n=l*c;
     for (i = 0;i < l;i++){
          for (j = 0;j < c;j++){
               printf("Digite um numero para arr[%d][%d]: ",i,j);
               scanf("%d",&arr[i][j]);
           }
      }
}
          
float media(int arr[100][100], int l, int c){
     float soma = 0, media = 0;
     int i,j,n=l*c;
     for (i = 0;i < l;i++){
          for (j = 0;j < c;j++){
               soma+=arr[i][j];
          }
      }
      media = soma/n;
      return media;
}

int main(void){
     int c,l;
     int v[100][100];
     float m;
     printf("Digite a quantidade de colunas: ");
     scanf("%d",&c);
     printf("Digite a quantidade de linhas: ");
     scanf("%d",&l);
     preenche(v,l,c);
     m=media(v,l,c);
     printf("media: %f\n",m);
     return 0;
}
     
