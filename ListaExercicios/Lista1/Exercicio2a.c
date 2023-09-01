#include <stdlib.h>
#include <stdio.h>

int main()
{
    double celsius, fahrenheit;
    printf("Informe o valor da temperatura em Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit - 32.0) * (5.0/9.0);
    printf("O valor em celsius: %0.2f \n\n", celsius);
    system("PAUSE");
    return 0;
}