#include <stdio.h>

int main() {

    float nota1, nota2, mediafinal;

    printf("SISTEMA INTEGRADO DE NOTAS ACADEMICAS\n");
    printf("-----------------------------------------\n");
    printf("2023 === SIMULADOR DE NOTAS =====\n");

    printf("DIGITE SUA PRIMEIRA NOTA: ");
    scanf("%f", &nota1);

    printf("DIGITE SUA SEGUNDA NOTA: ");
    scanf("%f", &nota2);

    mediafinal = (nota1 + nota2) / 2;

    printf("SUA NOTA FINAL E: %.2f\n", mediafinal);
    
    if (mediafinal >= 6.0)
    {
        printf("APROVADO!");
    }

    if (mediafinal < 6.0)
    {
        float notarec, mediafinalrec;
        printf("VOCE ESTA DE RECUPERACAO");
        printf("DIGITE SUA NOTA DA RECUPERACAO: ");
        scanf("%f", &notarec);

        mediafinalrec = (mediafinal + notarec) / 2;

        printf("SUA NOTA FINAL APOS A RECUPERACAO: %.2f\n", mediafinalrec);

        if (mediafinalrec >= 6.0)
        {
            printf("APROVADO!");
        }
        
        if (mediafinalrec < 6.0)
        {
            printf("REPROVADO!");
        }
        
    }
        
return 0;

}