#include <stdio.h>
float celsius_to_fahrenheit(float celsius)   // declaration de la fonction qui va retourner la valeure convertie de celsius en fahrenheit
{
    return (celsius*9/5 + 32);             // retourner la valeur convertie
}
int main()                                // declaration de la fontion main
{
    float celsius;                       // declaration de de la variable celsius
    scanf("%f", &celsius);               // lire la valeur 
    printf("%.1f°C équivaut à %.1f°F", celsius, celsius_to_fahrenheit(celsius));  // afficher
}
