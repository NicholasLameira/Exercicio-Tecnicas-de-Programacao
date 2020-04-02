#include <stdio.h>

void inversoNumero(int numero){
    if(numero / 10 == 0){
        printf("%d", numero);
    } else {
        printf("%d", numero % 10);
        inversoNumero(numero / 10);
    }
}

int main(){
    int val = 0;

    printf("Digite um número qualquer e Obtera o seu inverso: ");
    scanf("%d", &val);

    inversoNumero(val);
    printf("\n");
    return 0;
}