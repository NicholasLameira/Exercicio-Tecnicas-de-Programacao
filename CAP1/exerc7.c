#include <stdio.h>

int pontoNoPlano(int coordenadaX, int coordenadaY){
    if(coordenadaX == 0 && coordenadaY == 0){
        return 0;
    }
    if(coordenadaX > 0){
        if(coordenadaY > 0){
            return 1;
        } else if(coordenadaY < 0){
            return 4;
        }
    } else if(coordenadaX < 0){
        if(coordenadaY > 0){
            return 2;
        } else if(coordenadaY < 0){
            return 3;
        }
    }
    return -1;
}

int main(){
    int coordenadaX, coordenadaY;

    printf("Digite a coordenada em X: ");
    scanf("%d", &coordenadaX);
    printf("Digite a coordenada em Y: ");
    scanf("%d", &coordenadaY);

    int result = pontoNoPlano(coordenadaX, coordenadaY);
    if(result > 0){
        printf("O p(%d, %d) encontra-se no %dº quadrante", coordenadaX, coordenadaY, result);
    } else if(result == -1){
        printf("O p(%d, %d) encontra-se em um eixo", coordenadaX, coordenadaY);
    } else {
        printf("O p(%d, %d) encontra-se na origem", coordenadaX, coordenadaY);
    }
    printf("\n");
}