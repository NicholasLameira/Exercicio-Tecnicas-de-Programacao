#include <stdio.h>

void apagarIt(char string[], char caracteresParaApagar[]){
    int i = 0, j = 0;
    for(; caracteresParaApagar[i] != '\0'; i++){
        for(j = 0; string[j] != '\0'; j++){
            if(caracteresParaApagar[i] == string[j]){
                string[j] = ' ';
            }
        }
    }
}

void apagarRec_1(char string[], char caracteresParaApagar[], int i, int j){
    if(string[j] != '\0'){
            if(caracteresParaApagar[i] == string[j]){
                string[j] = ' ';
            }
            apagarRec_1(string, caracteresParaApagar, i, j + 1);
    }
    else if(caracteresParaApagar[i] != '\0'){
        apagarRec_1(string, caracteresParaApagar, i + 1, 0);
    }
}

void apagarRec(char string[], char caracteresParaApagar[]){
    apagarRec_1(string, caracteresParaApagar, 0, 0);
}

int main(){
    char string[12] = {'e', 'u', 'f', 'r', 'a', 'n', 'i', 'o'};
    char caracteresParaApagar[4] = {'e', 'f', 'a'};

    apagarRec(string, caracteresParaApagar);

    int i = 0;
    for(; string[i] != '\0'; i++){
        printf("%c ", string[i]);
    }


    return 0;
}