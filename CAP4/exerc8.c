#include <stdio.h>
#define TAMANHO 4

int ocorrenciasXVector(int vector[], int valor, int nElementos){
    if(nElementos == 0){
        return 0;
    } else {
        if(vector[nElementos - 1] != valor){
            return 0 + ocorrenciasXVector(vector, valor, nElementos - 1);
        }
        return 1 + ocorrenciasXVector(vector, valor, nElementos - 1);
    }
}

int main(){
    int nElementos = TAMANHO;
    int vector[TAMANHO] = {1, 2, 2, 2};
    int valor = 2;
    int result = 0;

    result = ocorrenciasXVector(vector, valor, nElementos);

    printf("O elemento %d aparece %d vez(es)\n", valor, result);

    return 0;
}