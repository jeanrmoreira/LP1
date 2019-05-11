#include <stdio.h>

struct Ponto {
     int x;
     int y;
     int z;
};

void main (void) {
     struct Ponto v1;
          v1.x = 1;
          v1.y = 0;
          v1.z = 5;
     struct Ponto v2;
          v2.x = 3;
          v2.y = 3;
          v2.z = 3;
     struct Ponto v3;
          v3.x = 0;
          v3.y = 10;
          v3.z = 0;
          
     v1.z+=10;
     v2.z+=10;
     v3.z+=10;

     printf("coordenada y de v1: %d\ncoordenada y de v2: %d\ncoordenada y de v3: %d\n",
          v1.y,v2.y,v3.y);

     

     printf("V2: (%d, %d, %d)\n",v2.x,v2.y,v2.z);

}
