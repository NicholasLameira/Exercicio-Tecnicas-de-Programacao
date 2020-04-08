#define TAMANHO 7
#include <stdio.h>



int vectorOrdenado(float vector[], int nElementos){
    if(nElementos - 2 == 0){
        if(vector[nElementos - 1] > vector[nElementos - 2]){
            return 1;
        }
    } else {
        if(vector[nElementos - 1] < vector[nElementos - 2]){
            return -1;
        }
        vectorOrdenado(vector, nElementos - 1);
    }
}

int main(){
    float vector[TAMANHO] = {1, 2, 3, 4, 5, 10, 8};
    int nElementos = 7;
    int result = 0;

    result = vectorOrdenado(vector, nElementos);

    if(result == 1){
        printf("Vector Ordenado!\n");
    } else {
        printf("Vector não Ordenado!\n");
    }
    return 0;
}