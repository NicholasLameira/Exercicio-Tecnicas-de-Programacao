#include <stdio.h>

int numeroPartido(int n, int n1, int n2){
    int pot = 1;
    while(pot <= n2){
        pot *= 10;
    }
    if(n == n1 * pot + n2){
        return 1;
    }
    return 0;
}

int main(){
    int n, n1, n2;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de n1: ");
    scanf("%d", &n1);
    printf("Digite o valor de n2: ");
    scanf("%d", &n2);

    if(numeroPartido(n, n1, n2)){
        printf("Sim, n = %d está partido em n1 = %d e n2 = %d\n", n, n1, n2);
    } else {
        printf("Não, n = %d não está partido em n1 = %d e n2 = %d\n", n, n1, n2);
    }
}