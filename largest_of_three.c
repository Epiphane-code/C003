#include <stdio.h>
int grand (int a, int b, int c)  // declaration de la fonction qui permet de le plus grand nombre parmis les trois 
{
    int big;                    // declaration
    if (a > b)                  // on commence a poser des conditions de comparaison pour pouvoir retourner le plus le grand
    {
        if (a > c)
        {
            big = a;
        }
        else big = c;
    }
    else 
    {
        if (b > c)
        {
            big = b;
        }
        else big = c;
    }

    return big;                   // retour du plus grand
}

int main()        // declaration de la fonction main
{
    int a, b, c, resultat;     // declaration des variables
    scanf("%d %d %d", &a, &b, &c); // litre les trois valeurs
    resultat = grand(a,b,c);        // appel de la fonction declarée depuis le debut  
    printf("Le plus grand nombre est : %d", resultat);  // afficher
}