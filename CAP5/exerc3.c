#include <stdio.h>

int indexOfRec_2(char string[], char valor[], int i, int j){
    if(string[i] == '\0'){
        return -1;
    }
    else{
        if(valor[j] == '\0'){
            return indexOfRec_2(string, valor, i + 1, 0);
        }
        
        if(string[i] == valor[j]){
            return i;
        } else{
            return indexOfRec_2(string, valor, i, j + 1);
        }
    }
}

int indexOfRec(char string[], char valor[]){
    return indexOfRec_2(string, valor, 0, 0);
}


//Função Iterativa
int indexOfIt(char string[], char valor[]){
    int i = 0;
    int j = 0;

    while(string[i] != '\0')
    {
        for(j = 0; valor[j] != '\0'; j++){
            if(string[i] == valor[j]){
                return i;
            }
        }
        i++;
    }
    return -1;
}
int main(){
    char string[10] = {'a', 'b', 'C', 'A', 'c', 'B'};
    char cadeiaCaracters[10] = {'L', 'B', 'c'};
    int result = indexOfIt(string, cadeiaCaracters);

    printf("Result: %d\n", result);
    return 0;
}