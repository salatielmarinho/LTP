#include <stdlib.h>
#include <stdio.h>

int main()
{
    int celsius, fahrenheit;
    printf("Informe o valor da temperatura em Fahrenheit: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32) * 0.56;
    printf("O valor em celsius: %d \n\n", celsius);
    system("PAUSE");
    return 0;
}