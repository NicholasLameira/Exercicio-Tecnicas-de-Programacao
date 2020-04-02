#include <stdio.h>

int capicua(int number, int pot){
    if(number/pot != number % 10){
        return 0;
    } else if(number % 10 == 0){
        return 1;
    }
    return capicua((number - (number/pot) * pot),  pot/10);
}


int main(){

    return 0;
}