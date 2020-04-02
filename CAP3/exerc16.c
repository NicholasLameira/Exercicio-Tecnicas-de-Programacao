#include <stdio.h>

int somaPrimeirosNInteiros(int n){
    if(n == 1){
        return 1;
    }
    return n + somaPrimeirosNInteiros(n - 1);
}
int main(){
    int n = 0;

    printf("Digite um determinado valor de N: ");
    scanf("%d", &n);

    int soma = somaPrimeirosNInteiros(n);

    printf("Soma %d primeiros inteiros: %d\n", n, soma);
    return 0;
}