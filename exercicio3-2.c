#include <stdio.h>
 int main(void) {
  char temps[50];
  int soma=0;
  float media;
  int i;
  int acima = 0;
  int temp;

  for (i=0;i<50;i++){
     printf("Temperatura entre -100 e 100:\n");
     scanf("%hhd",&temps[i]);
     temp=temps[i];
     soma+=temp;
      }
     media=soma/50.0;
printf("media %f\n",media);

  for (i=0;i<50;i++){
    if (temps[i]>media) {
      acima++;
           }
      }

   printf("Temperaturas acima da media: %d\n",acima);
   return 0;

}
