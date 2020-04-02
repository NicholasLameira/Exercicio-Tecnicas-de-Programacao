#include <stdio.h>
//review
float serieHarmonica(int n){
    if(n == 1){
        return 1;
    }
    return serieHarmonica(n - 1) + 1 / n;
}

int main(){
    int n = 0;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    float result = serieHarmonica(n);

    printf("Result Série harmônica: %.2f\n", result);
    return 0;
}