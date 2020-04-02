#include <stdio.h>

int multiplicacao_iterativa(int num1, int num2){
    for(; num2 > 1; num2--){
        num1 += num1;
    }
    return num1;
}

int multiplicacao_recursiva(int num1, int num2){
    if(num2 == 1){
        return num1 * num2;
    }
    return multiplicacao_recursiva(num1, num2 - 1) + num1;
}

int main(){
    int num1 = 0, num2 = 0;

    printf("Por-favor digite o valor do primeiro factor: ");
    scanf("%d", &num1);

    printf("Por-favor digite o valor do segundo factor: ");
    scanf("%d", &num2);

    int resultadoIterativo = multiplicacao_iterativa(num1, num2);
    int resultadoRecursivo = multiplicacao_recursiva(num1, num2);

    printf("RESULT ITERATIVO: %d\nRESULT RECURSIVO: %d\n", resultadoIterativo, resultadoRecursivo);
    return 0;
}