#include <stdio.h>

struct Personagem {
     int forca;
     int energia;
     int experiencia;
};


struct Personagem preencheA (void) {
     struct Personagem px;
     printf("forca: ");
     scanf("%d",&px.forca);
     printf("energia: ");
     scanf("%d",&px.energia);
     printf("experiencia: ");
     scanf("%d",&px.experiencia);
     return px;  


}

void main (void) {
    struct Personagem p1 = preencheA();
    struct Personagem p2 = preencheA();
    printf("(%d,%d,%d) vs (%d,%d,%d)\n",
           p1.forca, p1.energia, p1.experiencia,
           p2.forca, p2.energia, p2.experiencia);

    
}
