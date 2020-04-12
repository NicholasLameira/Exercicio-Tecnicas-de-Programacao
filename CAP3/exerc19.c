#include <stdio.h>

int isPrimo(int numero, int i){
    if(numero == 2){
        return 1;
    } else if(numero % 2 == 0){
        return 0;
    } else {
        if(numero % i == 0){
            return 0;
        }
        i--;
        if(i == 1){
            return 1;
        }
        return isPrimo(numero, i);
    }
}

int main(){
    int numero = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("O número %d é primo? %d\n", numero, isPrimo(numero, numero - 1));

    return 0;
}