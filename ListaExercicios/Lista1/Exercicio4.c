#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
    double totalGasto, resultado; 
    int opcao;

    setlocale(LC_ALL,"Portuguese");
    printf("Total Gasto R$ ");
    scanf("%lf", &totalGasto);
    printf("************Escolher op��es***************** \n\n");
    printf("Opcao 1: � vista com 10(por cento) de desconto \n");      
    printf("Opcao 2: em duas vezes (pre�o da etiqueta) \n");    
    printf("Opcao 3: de 3 at� 10 vezes com 3(por cento) de juros ao m�s (somente para compras acima de R$ 100,00) \n");
    printf("********************************************* \n\n");
    printf("Opcao: ");
    scanf("%d", &opcao);     
    switch (opcao)
    {
        case 1:
        resultado = totalGasto - (totalGasto * 0.10);
        printf("O valor com desconto obtido pela op��o 1 � de R$%0.2lf \n\n", resultado);
        system("PAUSE");        
            break;
        case 2:
        resultado = totalGasto / 2;
        printf("O valor das duas parcelas ser� de R$%0.2lf \n\n", resultado);
        system("PAUSE");        
            break;
        case 3:
        if (totalGasto >= 100.00)
        {
            printf("************Parcelas de 3 � 10 com 3(por cento) de juros ao m�s***************** \n\n");
            resultado = totalGasto + (totalGasto * 0.03);
            printf("            O valor da terceira parcela: R$%0.2lf \n", resultado);
            
            resultado = totalGasto + (totalGasto * 0.06);
            printf("            O valor da quarta   parcela: R$%0.2lf \n", resultado);
            
            resultado = totalGasto + (totalGasto * 0.09);
            printf("            O valor da quinta   parcela: R$%0.2lf \n", resultado);
            
            resultado = totalGasto + (totalGasto * 0.12);
            printf("            O valor da sexta    parcela: R$%0.2lf \n", resultado);
            
            resultado = totalGasto + (totalGasto * 0.15);
            printf("            O valor da setima   parcela: R$%0.2lf \n", resultado);;
            
            resultado = totalGasto + (totalGasto * 0.18);
            printf("            O valor da oitava   parcela: R$%0.2lf \n", resultado);;
            
            resultado = totalGasto + (totalGasto * 0.21);
            printf("            O valor da nona     parcela: R$%0.2lf \n", resultado);
            
            resultado = totalGasto + (totalGasto * 0.24);
            printf("            O valor da decima   parcela: R$%0.2lf \n\n", resultado);
            printf("******************************************************************************* \n\n");
            system("PAUSE");
        }
        else
        {
            printf("parcelamento permitido somente para Total Gasto acima de R$100,00 \n\n");
            system("PAUSE");
        }       
            break;        
        default:
            printf("Operador inv�lido! \n");
            system("PAUSE");
            break;
    }        
    return 0;
}