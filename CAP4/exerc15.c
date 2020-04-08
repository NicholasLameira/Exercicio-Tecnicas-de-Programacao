#include <stdio.h>
#define TAMANHO1 5
#define TAMANHO2 5

void somarVector(int vector1[], int vector2[], int vector3[], int nElementos1, int nElementos2, int nElementos3){
    if(nElementos1  == 0 && nElementos2 == 0){
        printf(" ");
    }else{
        if(nElementos2 - 1 >= 0 && nElementos1 - 1 >= 0){
            if(vector1[nElementos1 - 1] + vector2[nElementos2 - 1] > 9){
                vector3[nElementos3 - 1] = (vector1[nElementos1 - 1] + vector2[nElementos2 - 1]) % 10;
                vector3[nElementos3 - 2] += (vector1[nElementos1 - 1] + vector2[nElementos2 - 1]) / 10;
            }else {
                vector3[nElementos3 - 1] += vector1[nElementos1 - 1] + vector2[nElementos2 - 1];
            }
            nElementos3--;
            nElementos2--;
            nElementos1--;
        } else if(nElementos1 - 1 >= 0){
            vector3[nElementos3 - 1] += vector1[nElementos1 - 1];
            nElementos3--;
            nElementos1--;
        } else if(nElementos2 - 1 >= 0){
            vector3[nElementos3 - 1] += vector2[nElementos2 - 1];
            nElementos2--;
            nElementos3--;
        }
        somarVector(vector1, vector2, vector3, nElementos1, nElementos2, nElementos3);
    }
}

int main(){
    int vector1[TAMANHO1] = {1, 2, 4, 5, 6};
    int nElementos1 = 5;
    int vector2[TAMANHO2] = {9, 2, 3, 6};
    int nElementos2 = 4;
    int nElementos3;
    
    if(nElementos1 > nElementos2){
        nElementos3 = nElementos1 + 1;
    } else {
        nElementos3 = nElementos2 + 1;
    }
    int vector3[nElementos3];

    for(int i = 0; i < nElementos3; i++){
        vector3[i] = 0;
    }

    somarVector(vector1, vector2, vector3, nElementos1, nElementos2, nElementos3);
    
    for(int i = 0; i < nElementos3; i++){
        printf("%d ", vector3[i]);
    }

    return 0;
}