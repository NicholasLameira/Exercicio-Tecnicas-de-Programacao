#include <stdio.h>

int maxMin(int vector[], int nElementos, int *min){
    if(nElementos == 1){
        return vector[0];
    } else {
        int maior = maxMin(vector, nElementos - 1, *min);
        int menor = *min;

        if(maior > vector[nElementos - 1]){
            return maior;
        } else if(menor < vector[nElementos - 1]){
            menor = vector[nElementos - 1];
        }
        return vector[nElementos - 1];
    }
}
skajska
int main(){

    return 0;
}