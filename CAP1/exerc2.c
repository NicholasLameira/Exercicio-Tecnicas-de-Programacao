#include <stdio.h>

int numerosInversos(int num1, int num2){
    int denominador = 1000;
    while(num1 != 0)
    {
        if(num1 / denominador != num2 % 10)
        {
            return 0;
        }
        num1 %= denominador;
        denominador /= 10;
        num2 /= 10;
    }
    return 1;
}

int main()
{
    int num1;
    int num2;

    printf("Digite o valor de A: ");
    scanf("%d", &num1);
    printf("Digite o valor de B: ");
    scanf("%d", &num2);

    if(numerosInversos(num1, num2) == 1)
    {
        printf("%d é inverso de %d\n", num1, num2);
    }
    else
    {
        printf("%d não é inverso de %d\n", num1, num2);
    }
    return 0;
}
