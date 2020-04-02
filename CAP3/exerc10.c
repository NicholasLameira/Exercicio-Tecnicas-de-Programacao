#include <stdio.h>

void retirar_numeros(int numero){
    if(numero / 10 == 0){
        printf("%d, ", numero);
    } else {
        retirar_numeros(numero / 10);
        printf("%d, ", numero % 10);
    }
}

int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    retirar_numeros(numero);
}