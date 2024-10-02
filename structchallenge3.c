// // // // // // // // Challenge 3 : Passage de Structure en Argument // // // // // // // //

#include <stdio.h>

struct Rectangle
{
    float longeur;
    float largeur;
};
// fonction pour la calculation de l'aire de rectangle

float calculation_air(struct Rectangle rect)
{
    return rect.largeur*rect.longeur;
}
int main(){
    struct Rectangle rectangle;
    printf("Veuillez entrer la longeur de rectangle : ");
    scanf("%f",&rectangle.longeur);
    printf("Veuillez entrer la longeur de rectangle : ");
    scanf("%f",&rectangle.largeur);
    float resultat = calculation_air(rectangle);
    printf("L'aire de rectangle = %.2f ",resultat);
    return 0;    
}
