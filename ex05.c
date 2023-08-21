#include<stdio.h>

int main(){
    long long int denominador = 50, denominadorFinal = 1;
    while(denominador != 2){
        if(denominador == 50) denominadorFinal = denominador*denominador-2;
        else{
            denominadorFinal*=denominador-2;
        }
        denominador-=2;
    }
    
    printf("%lld",denominadorFinal);
    return 0;
}