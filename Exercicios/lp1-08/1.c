#include <stdio.h>
#include <string.h>

int main (void) {
     FILE* f = fopen("/tmp/arq1.txt", "w");
     char st[25];
     printf("Digite a string: ");
     scanf("%s",st);
     int x=strlen(st);
     for (int i = 0; i < x; i++){
          fputc(st[i], f);
     }
     fclose(f);

    return 0;

}
