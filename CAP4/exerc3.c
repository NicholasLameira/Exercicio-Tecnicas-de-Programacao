#include <stdio.h>

int verificarParidade(int vector[], int nElementos){
    if(nElementos == 1){
        if(vector[0] % 2 == 0){
            return 0;
        }
        return 1;
    } else {
        if((nElementos - 1) % 2 != 0){
            if(vector[nElementos - 1] % 2 != 0){
                return 0;
            }
        } else {
            if(vector[nElementos - 1] % 2 == 0){
                return 0;
            }
        }
        verificarParidade(vector, nElementos - 1); 
    }
}

int main(){
    int vector[] = {1, 1, 3, 4};
    int nElementos = 4;

    int result = verificarParidade(vector, nElementos);

    printf("Result = %d\n", result);

    return 0;
}