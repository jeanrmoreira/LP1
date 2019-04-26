#include <stdio.h>

int strlen2(char* str) {
     int i = 0;
     while (str[i] != '\0'){
          i++;
     }
     return i;
}


int main (void) {
     char str[100];
     int qtd;
     printf("Digite a string: ");
     scanf("%s",str);
     qtd = strlen2(str);
     printf("a string %s possui %d caracteres\n",str,qtd);
     return 0;
}
     
