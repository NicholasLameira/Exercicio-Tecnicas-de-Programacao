#include <stdio.h>

float potencia_recursiva(float base, int expoente){
    if(expoente == 0){
        return 1;
    } else if (expoente == 1){
        return base;
    }
    return base * potencia_recursiva(base, expoente - 1);
}
int main(){
    int expoente = 0;
    float base = 0;

    printf("Digite o valor da base da potência: ");
    scanf("%f", &base);

    printf("Digite o valor do expoente: ");
    scanf("%d", &expoente);

    float potencia = potencia_recursiva(base, expoente);

    printf("%.2f ^ %d = %.2f\n", base, expoente, potencia); 

    return 0;
}