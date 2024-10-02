// // // // // // // // Challenge 1 : Définition et Utilisation de Structure // // // // // // // //
#include <stdio.h>
#include <string.h>

int main(){

struct personne
{
    char nom[25];
    char prenom[25];
    int age;
};
// --------> Method 1 <-------- //
struct personne p1;
strcpy(p1.nom,"El khader");
strcpy(p1.prenom,"Yassine");
p1.age= 19;

printf("{%s , %s , %d}",p1.nom,p1.prenom,p1.age);
return 0;

}
