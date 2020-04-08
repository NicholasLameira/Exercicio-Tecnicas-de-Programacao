#include <stdio.h>
#define TAMANHO 12

void somaNVectores(int vector1[], int vector2[], int nElementos){
    if(nElementos - 1 == 0){
        vector2[0] = vector1[0];
    } else {
        int i = nElementos - 1;

        for(; i >= 0; i--){
            vector2[nElementos - 1] += vector1[i];
        }

        somaNVectores(vector1, vector2, nElementos - 1);
    }
}

int main(){
    int vector[TAMANHO] = {4, 3, 6, 1, 6, 9, 0, 3, 1, 7, 9, 2};
    int nElementos = 12;
    int vectorResult[nElementos];

    for(int i = 0; i < nElementos; i++){
        vectorResult[i] = 0;
    }
    
    somaNVectores(vector, vectorResult, nElementos);
    
    for(int i = 0; i < nElementos; i++){
        printf("%d, ", vectorResult[i]);
    }
    return 0;
}