#include <stdio.h>

void apresentacaoEscada(int n){
    if(n == 1){
        printf("1\n");
    } else {
        apresentacaoEscada(n - 1);
        
        int i = n;
        for(; i > 0; i--){
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main(){
    int n = 0;

    printf("Qual será o tamanho da sua escada? ");
    scanf("%d", &n);
    apresentacaoEscada(n);
    return 0;
}