#include <stdio.h>
int grand (int a, int b, int c)
{
    int big;
    if (a > b)
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

    return big;
}

int main()
{
    int a, b, c, resultat;
    scanf("%d %d %d", &a, &b, &c);
    resultat = grand(a,b,c);
    printf("Le plus grand nombre est : %d", resultat);
}