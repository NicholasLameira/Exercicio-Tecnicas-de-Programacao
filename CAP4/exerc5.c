#include <stdio.h>
#define TAMANHO 3
void removerElemento(float vector[], int k, int *nElementos){
    if(*nElementos - 1 > k){
        vector[k] = vector[k + 1];
        removerElemento(vector, k + 1, nElementos);
    }else{
        *nElementos -= 1;
        vector[k] = 0;
    }
}
int main(){
    int nElementos = 0;
    float vector[TAMANHO];
    int i = 0, indice = 0;

    for(; i < nElementos; i++){
        printf("%dº Valor: ", i + 1);
        scanf("%f", &vector[i]);
        nElementos++;
    }

    printf("Digite o indice do elemento que pretende eliminar: ");
    scanf("%d", &indice);

    removerElemento(vector, indice, &nElementos);

    for(i = 0; i < nElementos; i++){
        printf("%f, ", vector[i]);
    }
    printf("\n");
    return 0;
}