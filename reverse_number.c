#include <stdio.h>
int inverser(int nb)
{
    int reste, inverse = 0;
    while (nb != 0)
    {
        reste = nb%10;
        inverse = inverse*10 + reste;
        nb = nb/10;
    }

    return inverse;
    
}

int main()
{
    int in;
    scanf("%d", &in);
    printf("Nombre inversé : %d\n", inverser(in));
} 