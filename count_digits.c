#include <stdio.h>
int count_digits(unsigned long long nb)   // declaration de la fonction qui permet de compter le nombre des chiffres d'un nombre entier
{
    int count = 0, test = nb;            // declaration et affectation des variables
    while (test >= 1)                     // tant que test est superieure ou egale à 1
    {
        count = count + 1;                // incrementer count en + 1
        test = test/10;                   // test devient test/10
    }

    return count;                         // retourner count
}

int main()                              // declaration de la fonction main
{
   unsigned long long nb;               // declaration de la variable nb pour recuperer la valeur entrée par l'utilisateur
   scanf("%llu", &nb);
   printf("%llu contient %d chiffre(s).", nb, count_digits(nb));   // afficher
    
}