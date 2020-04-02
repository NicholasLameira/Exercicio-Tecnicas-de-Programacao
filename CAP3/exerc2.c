#include <stdio.h>

int soma_n_primeiros_termos_iterativa(int n){
    int soma = n;
    for(; n > 0; n--){
        soma += n - 1;
    }
    return soma;
}

int soma_n_primeiros_termos_recursiva(int n){
    if(n == 1){
        return 1;
    }
    return n + soma_n_primeiros_termos_recursiva(n - 1);
}

int main(){
    int n = 0;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    int resultadoIterativo = soma_n_primeiros_termos_iterativa(n);
    int resultadoRecursivo = soma_n_primeiros_termos_recursiva(n);

    printf("RESULT ITERATIVO: %d\nRESULT RECURSIVO: %d\n", resultadoIterativo, resultadoRecursivo);
    
    return 0;
}