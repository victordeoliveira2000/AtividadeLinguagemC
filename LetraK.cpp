#include <stdio.h>

int main() {
    float prestacao, atraso, valor, taxa, tempo;

    printf("Qual valor da prestacao? ");
    scanf("%f", &prestacao);

    printf("Tempo de atraso em meses? ");
    scanf("%f", &atraso);

    printf("Qual o valor total da dívida? ");
    scanf("%f", &valor);

    printf("Qual a taxa de juros? ");
    scanf("%f", &taxa);

    printf("Qual o tempo em meses? ");
    scanf("%f", &tempo);

    float valorAtrasado = valor + valor * (taxa / 100) * tempo;
    printf("O valor total atrasado será de %.2f\n", valorAtrasado);

    return 0;
}

