#include <stdio.h>

int mdc(int numerador, int denominador){
    int resto = 0;
    while (denominador != 0)
    {
        resto = numerador % denominador;
        numerador = denominador;
        denominador = resto;
    }
    return numerador;
}

int main(){
    int numerador, denominador;

    printf("Cálculo de MDC usando algoritmo de Euclides");
    printf("Digite o primeiro valor: ");
    scanf("%d", &numerador);
    printf("Digite o segundo valor: ");
    scanf("%d", &denominador);

    int resultMDC = mdc(numerador, denominador);

    printf("MDC(%d, %d) = %d", numerador, denominador, resultMDC);
}