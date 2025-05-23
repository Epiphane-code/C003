#include <stdio.h>
// d'abord une fonction qui inverse les chiffres d'un entier
int inverser(int nb)                
{
    int reste, inverse = 0; // declation et initialisation
    while (nb != 0)         // tant que nb est different de zero
    {
        reste = nb%10;      // reste recupere le dernier chiffre du nombre
        inverse = inverse*10 + reste; // inverse provisoire recupere inverse*10 + le dernier chiffre du nombre
        nb = nb/10;                  // on incremente nb en nb sans le dernier chiffre
    }

    return inverse;                 // on retourne l'inverse
    
}

int main()  // declaration de la fonctrion main
{
    int in;   // declaration
    scanf("%d", &in);  // lire la valeur entrée par l'utilisateur
    printf("Nombre inversé : %d\n", inverser(in)); // afficher
} 