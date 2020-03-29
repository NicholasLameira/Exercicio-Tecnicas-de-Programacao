#include <stdio.h>

float potencia(float base, int expoente){
    if(expoente == 0){
        return 1;
    } else if(expoente < 0){
        expoente = -expoente;
    }
    float result = base;
    for(; expoente > 1; expoente--){
        result *= base;
    }
    return result;
}

int main(){
    float base;
    int expoente;

    printf("Digite a base da potência: ");
    scanf("%f", &base);
    printf("Digite o expoente da potência: ");
    scanf("%d", &expoente);
    printf("%.2f ^ %d = %.2f\n", base, expoente, potencia(base, expoente));
}