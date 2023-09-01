#include <stdlib.h>
#include <stdio.h>

int main()
{
    double cm = 100, mm = 1000, mt, resultadoCm, resultadoMm;
    printf("Favor informar o valor em metros: ");

    scanf("%lf", &mt); // le o valor digitado em tela e armazena na variavel mt (valor metros)

    resultadoCm = (mt * cm); // converte para centimetros
    resultadoMm = (mt * mm); //converte para milimetros

    printf("\nO valor de %.2f m corresponde a %.2f cm e %.2f mm.\n\n", mt ,resultadoCm, resultadoMm);
    system("PAUSE");
    return 0;
}