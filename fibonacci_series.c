#include <stdio.h>
int fibo_terme(int t)     // declaration de la fonction qui va nous servir a calculer le t ieme terme de la suite Fibonacci
{
    int terme;           // declaration de la variable terme qui nous permettra de recuperer le rang terme demandé
    if (t == 0)          // si t = 0
    {
        return 0;       // retourner zero
    }
    else if (t == 1)     // si t = 1
    {
        return 1;         // retourner 1
    }
    else                  // sinon
    {
        return fibo_terme(t - 2) + fibo_terme(t - 1);    // retourner le terme au rang t

    }
    
}

int main()        // declaration de la fonction main
{
    int i, limite, terme;    // declaration des variables
    scanf("%d", &limite);    // lire la valeur auquel on ne doit pas depasser
    i=0;                     // initialisation du rang i en 0
    printf("Fibonacci :");     // afficher "Fibonacci :"
    while (fibo_terme(i) < limite)  // tant que le terme est inferieure à la limite
    {
        printf(" %d", fibo_terme(i));   // l'afficher
        i = i + 1;                      // et incrementer le rang
    }
    
}