#include <stdio.h>

int size(char string[], int i){
    if(string[i] != '\0'){
        return 1 + size(string, i + 1);
    }
    return 0;
}

void moverIterativo(char string[]){
    int tamanho = size(string, 0);
    tamanho--;
    int aux = string[tamanho];

    for(; tamanho > 0; tamanho--){
        string[tamanho] = string[tamanho - 1];
    }
    string[0] = aux;
}

void moverRecursivo_1(char string[], int tamanho){
    if(tamanho > 0){
        string[tamanho] = string[tamanho - 1];
        moverRecursivo_1(string, tamanho - 1); 
    }
    return;
}

void moverRecursivo(char string[], int tamanho){
    tamanho--;
    char aux = string[tamanho];

    moverRecursivo_1(string, tamanho);

    string[0] = aux;
}

int main(){
    char string[12] = {'e', 'u', 'f', 'r', 'a', 'n', 'i', 'o'};

    //moverIterativo(string);
    moverRecursivo(string, size(string, 0));
    int i = 0;
    for(; string[i] != '\0'; i++){
        printf("%c ", string[i]);
    }
    return 0;
}