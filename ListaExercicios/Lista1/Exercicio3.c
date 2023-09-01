#include<stdio.h>
#include<stdlib.h>

int main()
{
    double valor1, valor2, resultado;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &valor1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &valor2);  
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); 
    switch (operador)
    {
        case '+':
        resultado = valor1 + valor2;
        printf("O resultado final da Soma: %0.2lf \n\n", resultado);
        system("PAUSE");        
            break;
        case '-':
        resultado = valor1 - valor2;
        printf("O resultado final da Subtracao: %0.2lf \n\n", resultado);
        system("PAUSE");        
            break;
        case '*':
        resultado = valor1 * valor2; 
        printf("O resultado final da Multiplicacao: %0.2lf \n\n", resultado);
        system("PAUSE");       
            break;
        case '/':
        resultado = valor1 / valor2;
        printf("O resultado final da Divisao: %0.2lf \n\n", resultado);
        system("PAUSE");        
            break;
        default:
            printf("Operador invalido! \n");
            system("PAUSE");
            break;
    }        
    return 0;
}