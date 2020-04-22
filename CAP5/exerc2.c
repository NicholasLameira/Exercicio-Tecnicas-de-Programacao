#include <stdio.h>

//Função Recursiva
void maiusculaRec(char string[], int i){
    if(string[i] != '\0'){
        if(string[i] >= 97 && string[i] <= 122){
            string[i] -= 32;
        }
        return maiusculaRec(string, i + 1);
    }
}

//Função Iterativa
void maiusculaIt(char string[]){
    int i = 0;

    for(; string[i] != '\0'; i++){
        if(string[i] >= 97 && string[i] <= 122){
            string[i] -= 32;
        }
    }
}

int main(){
    char string[20] = {'L', 'U', 'k', 'e', 'n', 'Y'};

    maiusculaIt(string);
    //maiusculaRec(string, 0);

    int i = 0;
    for(; string[i] != '\0'; i++){
        printf("%c", string[i]);
    }
    printf("\n");
    return 0;
}