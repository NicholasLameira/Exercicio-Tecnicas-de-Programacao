#include <stdio.h>

int verificarBcontidoaA(int a, int b){
    if(b >= a){
        return -1;
    }

    while (b != 0)
    {
        if(a % 10 != b % 10)
        {
            return -1;
        }
        a /= 10;
        b /= 10;
    }
    return 1;
}

int main(){
    int valA;
    int valB;

    printf("Digite o valor de A: ");
    scanf("%d", &valA);
    printf("Digite o valor de B: ");
    scanf("%d", &valB);

    if(verificarBcontidoaA(valA, valB) == 1)
    {
        printf("%d está contido em %d\n", valB, valA);
    }
    else
    {
        printf("%d não está contido em %d\n", valB, valA);
    }
    return 0;
}