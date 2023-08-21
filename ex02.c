#include<stdio.h>

int main(){
    char funcionarioCargo;
    float salarioAtual, salarioFinal;
    int porcentagem;
    printf("Digite T para \"Técnico\", G para \"Gerente\" e O para \"Outro cargo\": ");
    scanf("%c",&funcionarioCargo);
    printf("\n");
    while(funcionarioCargo != 'G' && funcionarioCargo != 'T' && funcionarioCargo != 'O'){
        printf("Cargo \"%c\" inválido, por favor, digite novamente: ",funcionarioCargo);
        scanf(" %c",&funcionarioCargo);
        printf("\n");
    }
    printf("Digite o seu salário: ");
    scanf("%f",&salarioAtual);
    printf("\n");
    switch(funcionarioCargo){
        case 'T': porcentagem = 50; break;
        case 'G': porcentagem = 30; break;
        case 'O': porcentagem = 20; break;
    }
    salarioFinal = salarioAtual+((salarioAtual*porcentagem)/100);
    printf("Salário final: %.2f",salarioFinal);
    return 0;
}
