#include <stdio.h>

int capicua(int vector[], int inicio, int nElementos){
    if(inicio <= nElementos - 1){
        if(vector[inicio] == vector[nElementos - 1]){
            return 1;
        }
    } else {
        if(vector[inicio] != vector[nElementos - 1]){
            return -1;
        }
        capicua(vector, inicio + 1, nElementos- 1);
    }
}

int main(){
    int vector[4] = {1, 2, 2, 1};
    int nElementos = 4;

    int result = capicua(vector, 0, nElementos);

    if(result == 1){
        printf("O número é capicua");
    }else {
        printf("O número não é capicua");
    }
    return 0;
}