#include <stdio.h>
#include <string.h>

int main (void) {
     FILE* f = fopen("/tmp/arq1.txt", "r");
     char st[25];
     while(fgets(st, 25, f)){
          printf("%s\n", st);
     }
     return 0;
}
     
