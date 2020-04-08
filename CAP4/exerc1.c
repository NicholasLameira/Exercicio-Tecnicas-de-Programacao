#include <stdio.h>
#define TAMANHO 3

int produtoElementosVector(int vector[], int nElementos){
    if(nElementos == 1){
        printf("%d = ", vector[0]);
        return vector[0];
    }
    printf("%d x ", vector[nElementos - 1]);
    return vector[nElementos - 1] * produtoElementosVector(vector, nElementos - 1);
}

int main(){
    int nElementos = 0;
    int vector[TAMANHO];
    int i = 0;

    for(; i < TAMANHO; i++){
        printf("%dº Valor: ", i + 1);
        scanf("%d", &vector[i]);
        nElementos++;
    }
    
    int produto = produtoElementosVector(vector, nElementos);

    printf("%d\n", produto);

    return 0;
}