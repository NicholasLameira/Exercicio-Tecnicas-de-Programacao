#include <stdio.h>
#define TAMANHO 10

void concatenarIt(char st1[], char st2[]){
    int quantOcorrencias = 0;

    for(; st2[quantOcorrencias] != '\0'; quantOcorrencias++){
        printf(" ");
    }
    int i = 0;
    for(; st1[i] != '\0'; i++){
        st2[quantOcorrencias + i] = st1[i];
    }
}

int size(char string[], int i){
    if(string[i] != '\0'){
        return 1 + size(string, i + 1);
    }
    return 0;
}
void concatenarRec_1(char st1[], char st2[], int i, int quant){
    if(st1[i] != '\0'){
        st2[quant + i] = st1[i];
        concatenarRec_1(st1, st2, i + 1, quant);
    }
}

void concatenarRec(char st1[], char st2[]){
    concatenarRec_1(st1, st2, 0, size(st2, 0));
}


int main(){
    char st1[TAMANHO] = {'1', '2', '3', '4'};
    char st2[TAMANHO * 2 + 1] = {'a', 'b', 'c'};

    concatenarRec(st1, st2);

    int i = 0;
    for(; st2[i] != '\0'; i++){
        printf("%c ", st2[i]);
    }
    return 0;
}