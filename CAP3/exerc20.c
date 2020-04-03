#include <stdio.h>

float serieHarmonica(float n){
    if(n == 0){
        return 0;
    }
    return serieHarmonica(n - 1) + (1 / n);
}

int main(){
    int n = 0;

    printf("Digite um determinado valor para n: ");
    scanf("%d", &n);

    float harmonica = serieHarmonica(n);
    printf("Serie Harmonica Result: %.2f\n", harmonica);

    return 0;
}