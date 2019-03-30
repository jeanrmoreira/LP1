#include <stdio.h>
int main (void) {
 char vetN[50];
 int soma=0;
 int n;
 int i;
 int m=0;
 float media;
 
 for (i=0;i<50;i++){
     printf("Nota: ");
     scanf("%d",&n);
     soma+=n;
     vetN[i]=n;
     }
     
  media=soma/50.0;
  
  for (i=0;i<50;i++){
    if (vetN[i]>media){
      m++;
      }
     }
       printf("media: %f\n",media);
       printf("acima da media: %d\n",m);
    return 0;
    }
