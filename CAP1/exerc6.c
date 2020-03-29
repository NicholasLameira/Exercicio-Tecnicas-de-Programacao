#include <stdio.h>

void fibonnaci(int n){
    if(n == 1){
        printf("1");
    } else if(n == 2){
        printf("1, 1");
    }
    else if(n == 3){
        printf("1, 1, 2");
    }
    int primeiroTermo = 1, segundoTermo = 1, terceiroTermo = 2, auxiliarTroca;
    n -= 3;
    printf("1, 1, 2");
    for(; n > 0; n--){
        auxiliarTroca = terceiroTermo;
        terceiroTermo = primeiroTermo + segundoTermo + terceiroTermo;
        primeiroTermo = segundoTermo;
        segundoTermo = auxiliarTroca;
        printf(", %d", terceiroTermo);
    }
}

int main(int argc, char const *argv[])
{
    int n;

    printf("Digite um número de termos que quer ver da sequência de fibonnaci: ");
    scanf("%d", &n);
    fibonnaci(n);
    printf("\n");
    return 0;
}
