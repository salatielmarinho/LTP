#include <stdlib.h>
#include <stdio.h>

int main()
{
    double comprimento, largura, areaTotalTerreno;

    printf("Favor informar o comprimento do terreno (em metros): ");
    scanf("%lf", &comprimento); 

    printf("Favor informar a largura do terreno (em metros): ");
    scanf("%lf", &largura); 

    areaTotalTerreno = comprimento * largura;

    printf("\nO valor da area total do terreno: %.2f\n\n", areaTotalTerreno);
    system("PAUSE");
    
    return 0;
}