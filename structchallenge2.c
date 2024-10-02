// // // // // // // // Challenge 1 : Définition et Utilisation de Structure // // // // // // // //
#include <stdio.h>
#include <string.h>

int main(){

    struct etudiant
    {
        char nom[15];
        char prenom[15];
        int note[20];
    };
    struct etudiant student;
    
    printf("Nom : ");
    scanf("%s",&student.nom);
    printf("Prenom : ");
    scanf("%s",&student.prenom);
    printf("Veuillez entrer notes : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Les notes : \n");
        printf("Note%d : ",i+1);
        scanf("%d",&student.note[i]);
    }
    printf("Nom et Prenom : %s %s\n",student.nom,student.prenom);
    printf(">-------- list des notes ---------<\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Note %d : %d\n",i+1,student.note[i]);
    }
    return 0;
}