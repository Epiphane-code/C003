#include <stdio.h>
int fibo_terme(int t)
{
    int terme;
    if (t == 0)
    {
        return 0;
    }
    else if (t == 1)
    {
        return 1;
    }
    else 
    {
        return fibo_terme(t - 2) + fibo_terme(t - 1);

    }
    
}

int main()
{
    int i, limite, terme;
    scanf("%d", &limite);
    i=0;
    printf("Fiboncci :");
    while (fibo_terme(i) < limite)
    {
        printf(" %d", fibo_terme(i));
        i = i + 1;
    }
    
}