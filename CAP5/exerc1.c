#include <stdio.h>


int verificarVogal(char caracter){
    if(caracter == 'a' || caracter == 'A' || caracter == 'e' || caracter == 'E' || caracter == 'i' || caracter == 'I' ||
        caracter == 'o' || caracter == 'O' ||
        caracter == 'u' || caracter == 'U'){
            return 1;
        }
    return 0;
}

//Função Recursiva
int numeroVogaisRec_1(char string[], int i){
    if(string[i] != '\0'){
        if(verificarVogal(string[i])){
            return 1 +  numeroVogaisRec_1(string, i + 1);
        }
        return numeroVogaisRec_1(string, i + 1);
    }
}
int numeroVogaisRec(char string[]){
    return numeroVogaisRec_1(string, 0);
}


//Função Iterativa
int numeroVogaisIt(char string[]){
    int i = 0;
    int count = 0;

    while (string[i] != '\0')
    {
        if(verificarVogal(string[i])){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    char nome[10] = {'E', 'u', 'F', 'R', 'a', 'n', 'i', 'o'};

    int result = numeroVogaisIt(nome);

    printf("%d\n", result);
}