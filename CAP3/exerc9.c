#include <stdio.h>

int mdc(int numerador, int denominador){
    if(numerador == denominador){
        return 0;
    } else if(numerador < denominador){
        return numerador;
    }
    return mdc(numerador - denominador, numerador);
}
int main(){
    int numerador, denominador;

    printf("Digite o valor do seu numerador: ");
    scanf("%d", &numerador);
    printf("Digite o valor do seu denominador: ");
    scanf("%d", &denominador);

    int result = mdc(numerador, denominador);

    printf("MDC(%d, %d) = %d", numerador, denominador, result);

}