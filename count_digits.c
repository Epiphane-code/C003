#include <stdio.h>
int count_digits(unsigned long long nb)
{
    int count = 0, test = nb;
    while (test >= 1)
    {
        count = count + 1;
        test = test/10;
    }

    return count;
}

int main()
{
   unsigned long long nb;
   scanf("%llu", &nb);
   printf("%llu contient %d chiffre(s).", nb, count_digits(nb));
    
}