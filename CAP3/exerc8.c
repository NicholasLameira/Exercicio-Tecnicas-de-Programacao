#include <stdio.h>

int ackermann(int m, int n){
    if(m == 0){
        return n + 1;
    }else if(n == 0){
        return ackermann(m - 1, 1);
    }
    return ackermann(m - 1, ackermann(m, n - 1));
}

int main(){
    int m, n;

    printf("Digite o valor de m: ");
    scanf("%d", &m);
    printf("Digitw o valor de n: ");
    scanf("%d", &n);

    int result = ackermann(m, n);
    printf("Ackermann(%d, %d) = %d\n", m, n, result);

    return 0;
}