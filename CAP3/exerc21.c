#include <stdio.h>

void hanoi(int n, char torreA, char torreAux, char torreC){
    if(n >= 1){
        hanoi(n - 1, torreA, torreC, torreAux);
        printf("O disco %d foi movido da torre %c para a torre %c\n", n, torreA, torreC);
        hanoi(n - 1, torreAux, torreA, torreC);
    }
}
int main(){
    int numDiscos = 0;

    printf("Digite o número de discos que terá a partida: ");
    scanf("%d", &numDiscos);
    
    hanoi(numDiscos, 'A', 'B', 'C');

    return 0;
}