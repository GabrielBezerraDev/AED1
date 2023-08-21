#include<stdio.h>

int main(){
    int meses = 0;
    float divida = 10.000;
    float investimento = 1.500;
    while(divida > investimento){
        divida = divida+((divida*2.5)/100);
        investimento = investimento+((investimento*4)/100);
        meses++;
    }
    printf("Dívida: %.3f\nInvestimento: %.3f\n",divida,investimento);
    printf("Meses necessários para pagar a dívida: %d",meses);
    return 0;
}