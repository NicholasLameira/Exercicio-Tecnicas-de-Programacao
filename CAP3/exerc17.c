#include <stdio.h>

int euclides(int numerador, int denominador){
    if(denominador == 0){
        return numerador;
    }
    int resto = numerador % denominador;
    return euclides(denominador, resto);
    //OU
    //return euclides(denominador, numerador % denominador);
}

int main(){
    int numerador = 0, denominador = 0;

    printf("Numerador: ");
    scanf("%d", &numerador);
    printf("Denominador: ");
    scanf("%d", &denominador);

    printf("MDC(%d, %d) = %d\n", numerador, denominador, euclides(numerador, denominador));
    return 0;
}