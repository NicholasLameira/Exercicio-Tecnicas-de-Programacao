#include <stdio.h>

/* Código utilizando dois parametros rsrrsrs
int converter_decimal_binario(int num, int pot){
    if(num < 2){
        return num * pot;
    }
    return (num % 2) * pot + converter_decimal_binario(num / 2, pot *  10);
}*/

void converter_decimal_binario(int num){
    if(num < 2){
        printf("%d", num);
    } else {
        converter_decimal_binario(num / 2);
        printf("%d", num % 2);
    }
}

int main(){
    int number = 0;

    printf("Digite o valor em decimal que pretende digitar: ");
    scanf("%d", &number);

    printf("%d(10) = ", number);
    converter_decimal_binario(number);
    printf("\n");
    return 0;
}