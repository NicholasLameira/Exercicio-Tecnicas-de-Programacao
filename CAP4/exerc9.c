#include <stdio.h>
#define TAMANHO 4

int ocorrenciasXVector(int vector[], int valor, int nElementos){
    if(nElementos == 0){
        return -1;
    } else {
        if(vector[nElementos - 1] == valor){
            return nElementos - 1;
        }
        ocorrenciasXVector(vector, valor, nElementos - 1);
    }
}

int main(){
    int nElementos = TAMANHO;
    int vector[TAMANHO] = {1, 2, 4, 3};
    int valor = 2;
    int result = 0;

    result = ocorrenciasXVector(vector, valor, nElementos);

    printf("O elemento %d aparece na posição %d\n", valor, result);

    return 0;
}