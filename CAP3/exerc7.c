#include <stdio.h>

int soma_potencias_2(int n){
    if(n == 0){
        return 1;
    }
    return 2*soma_potencias_2(n - 1) + 1;
}

int main(){
    int n;

    printf("Digite até qual termo deseja calcular: ");
    scanf("%d", &n);

    int result = soma_potencias_2(n - 1);
    printf("O %dº termo = %d\n", n, result);

    return 0;
}