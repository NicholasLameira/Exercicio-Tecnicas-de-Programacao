#include<stdio.h>
#define TAMANHOA 10
#define TAMANHOB 20

void juncaoVectores(int vectorA[], int vectorB[], int vectorC[], int nElementosA, int nElementosB, int *nElementosC){
    if(nElementosA != 0){
        vectorC[nElementosA - 1] = vectorA[nElementosA - 1];
        *nElementosC += 1;
        juncaoVectores(vectorA, vectorB, vectorC, nElementosA - 1, nElementosB, nElementosC);
    } else if (nElementosB != 0){
        vectorC[*nElementosC] = vectorB[nElementosB - 1];
        *nElementosC += 1;
        juncaoVectores(vectorA, vectorB, vectorC, nElementosA, nElementosB - 1, nElementosC);
    }
}

int main(){
    int vectorA[TAMANHOA] = {1, 2, 3, 4, 5, 6};
    int vectorB[TAMANHOB] = {7, 8, 9, 10};
    int vectorC[TAMANHOA + TAMANHOB];
    int nElementosA = 6;
    int nElementosB = 4;
    int nElementosC = 0;
    int i = 0;

    juncaoVectores(vectorA, vectorB, vectorC, nElementosA, nElementosB, &nElementosC);

    for(; i < nElementosC; i++){
        printf("%d, ", vectorC[i]);
    }
    printf("\n");
    return 0;
}