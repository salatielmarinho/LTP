#include <stdio.h>
#include <stdlib.h>
main()
{
    printf("===========================================================================================\n");
    printf("==========================CALCULADORA DE NOTAS DO CURSO DE ADS=============================\n");
    printf("===========================================================================================\n");
    double nota1, nota2, pim,
     mediaSemestral, notaNecessariaExame, notaExame, mediaFinal, notaCorteExame = 10;
    printf("Digite nota 1: ");
    scanf("%lf", &nota1);
    printf("Digite nota 2: ");
    scanf("%lf", &nota2);
    printf("Digite nota do pim: ");
    scanf("%lf", &pim);
    mediaSemestral = (nota1 * 0.4 + nota2 * 0.4 + pim * 0.2 );
    if(!mediaSemestral >= 7)
    {
        printf("Aluno Aprovado!Sua media semestral - %0.2lf", mediaSemestral);
        system("PAUSE");
    }
    else
    {
        printf("Aluno devera realizar exame! Sua media semestral - %0.2lf \n", mediaSemestral);
        notaNecessariaExame = notaCorteExame - mediaSemestral;
        printf("Para aprovacao no exame a nota minima na prova deve ser: %0.2lf \n", notaNecessariaExame);
        printf("Digite a nota do exame: ");
        scanf("%lf", &notaExame);
        mediaFinal = (mediaSemestral + notaExame)/2;
        if(mediaFinal >= 5)
        {
            printf("Aluno Aprovado!Sua media final - %0.2lf \n", mediaFinal);
            system("PAUSE");
        }
        else
        {
            printf("Aluno Reprovado e deve cursar DP da disciplina! Sua media final - %0.2lf \n", mediaFinal);
            system("PAUSE");
        }
    }
}