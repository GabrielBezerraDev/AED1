#include<stdio.h>

int main(){
    int x,y;
    printf("Digite o valor de X: ");
    scanf("%d",&x);
    printf("Digite o valor de Y: ");
    scanf("%d",&y);
    if(x > 0 && y > 0) printf("O ponto (%d,%d) está no primeiro quadrante.",x,y);
    else if(x < 0 && y > 0) printf("O ponto (%d,%d) está no segundo quadrante.",x,y);
    else if(x < 0 && y < 0) printf("O ponto (%d,%d) está no terceiro quadrante.",x,y);
    else if(x > 0 && y < 0) printf("O ponto (%d,%d) está no quarto quadrante.",x,y);
    else if(x == 0 && y != 0) printf("O ponto (%d,%d) está em cima do eixo X.",x,y);
    else if(x != 0 && y == 0) printf("O ponto (%d,%d) está em cima do eixo Y.",x,y);
    else{
       printf("O ponto (%d,%d) está na origem.",x,y); 
    }
    return 0;
}