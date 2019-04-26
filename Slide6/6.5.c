#include <stdio.h>

int strlen2(char* str) {
     int i = 0;
     while (str[i] != '\0'){
          i++;
     }
     return i;
}

void strjoin2(char* d, char* o1, char* o2){
     int i,j=0;
     for(i=0;i<strlen2(o1);i++){
          d[i]=o1[i];
     }
     for (j=0;j<strlen2(o2);j++){
          d[strlen2(o1)+j]=o2[j];
     }
}

int main (void) {
     char o1[100];
     char o2[100];
     char dest[100];
     int qtd;
     printf("Digite a string de destino: ");
     scanf("%s",dest);
     printf("Digite a primeira string de origem: ");
     scanf("%s",o1);
     printf("Digite a segunda string de origem: ");
     scanf("%s",o2);
     strjoin2(dest,o1,o2);
     printf("%s\n",dest);
     
     return 0;
}
     
