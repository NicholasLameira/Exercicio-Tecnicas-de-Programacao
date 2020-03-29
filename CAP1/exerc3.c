#include <stdio.h>

float arredondamento(float valor){
    int parteInteira = valor;
    float valorDecimal = valor - parteInteira;

    if(valorDecimal < 0.25)
    {
        valorDecimal = 0.25;
    }
    else if(valorDecimal < 0.55)
    {
        valorDecimal = 0.55;
    }
    else if(valorDecimal < 0.75)
    {
        valorDecimal = 0.75;
    }
    else
    {
        valorDecimal = 1.0;
    }

    return parteInteira + valorDecimal;
}

int main(){
    float numero;

    printf("Digite um número com ponto flutuante: ");
    scanf("%f", &numero);
    printf("O %.2f  arredondado é: %.2f\n", numero, arredondamento(numero));

    return 0;
}