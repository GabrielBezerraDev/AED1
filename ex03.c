#include<stdio.h>
#include<stdbool.h>

int main(){
    bool isPrimo = true;
    int i = 1;
    int userNumber;
    printf("Digite um número: ");
    scanf("%d",&userNumber);
    while(i < userNumber){
        if(userNumber%i == 0 && i != userNumber && i != 1){
            isPrimo = false;
            break;
        }
        i++;
    }
    if(isPrimo){
        printf("É primo");
    }else{
        printf("Não é primo");
    }
    return 0;
}