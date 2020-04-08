#include <stdio.h>
#define TAMANHO 3 

void insertValue(int vector[], int valor, int *nElementos, int indice){
    if(*nElementos - 1 != indice){
        vector[*nElementos] = vector[*nElementos - 1];
        insertValue(vector, valor, nElementos - 1, indice);
    } else {
        vector[*nElementos - 1] = valor;
        *nElementos -= 1;
    }
}

int main(){
    int vector[10];
    int i = 0, valor = 0, indice = 0, nElementos = 0;

    for(; i < 5; i++){
        vector[i] = i;
        nElementos += 1;
    }

    printf("Qual valor pretende inserir no vector: ");
    scanf("%d", &valor);
    printf("Em qual posição pretende colocar o valor: ");
    scanf("%d", &indice);
    
    if(nElementos < 10){
        if(indice > -1 && indice < 10){
            insertValue(vector, valor, &nElementos, indice);
        } else {
            printf("Posição informada é invalida");
        }
    } else {
        printf("Vector encontra-se cheio não é possível inserir o valor pretendido");
    }

    for(i = 0; i < nElementos; i++){
        printf("%d\n", vector[i]);
    }
    printf("\n");
    return 0;
}