#include <stdio.h>
#define TAMANHO 4

int verificadorIgualdadeVectores(int v1[], int v2[], int nElementos){
    if(nElementos == 0){
        return 1;
    } else {
        if(v1[nElementos - 1] != v2[nElementos - 1]){
            return 0;
        }
        verificadorIgualdadeVectores(v1, v2, nElementos - 1);
    }
}

int main(){
    int result = 0;
    int nElementos = 0;
    int v1[TAMANHO] = {1, 2, 3, 4};
    int v2[TAMANHO] = {1, 2, 3, 3};
    nElementos = 4;

    result = verificadorIgualdadeVectores(v1, v2, nElementos);

    if(result == 1){
        printf("Os vectores 1 e 2 são iguais\n");
    } else {
        printf("Os vectores 1 e 2 não são iguais\n");
    }
    return 0;
}