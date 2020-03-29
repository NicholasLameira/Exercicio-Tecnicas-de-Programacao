#include <stdio.h>

int paresCombinados(int num1, int num2){
    if((num1 > 9 && num1 < 100) && (num2 > 9 && num2 < 100)){
        if(num1 % 2 != 0 || num2 % 2 != 0){
            return 0;
        }
        if(num1 / 10 == num2 % 10){
            if(num1 % 10 == num2 / 10){
                return 1;
            }
        }
        return 0;
    }
    return 0;
}

int main(){
    int num1;
    int num2;

    printf("Digite o valor do primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o valor do segundo número: ");
    scanf("%d", &num2);

    if(paresCombinados(num1, num2)){
        printf("Os números %d, %d são pares combinados\n", num1, num2);
    } else {
        printf("Os números %d, %d não são pares combinados\n", num1, num2);
    }
}