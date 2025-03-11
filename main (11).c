#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int dia;
    
    printf("Informe o dia:\n");
    printf("1 - Domingo\n");
    printf("2 - Segunda-feira\n");
    printf("3 - Terça-feira\n");
    printf("4 - Quarta-feira\n");
    printf("5 - Quinta-feira\n");
    printf("6 - Sexta-feira\n");
    printf("7 - Sábado\n");
    scanf("%d", &dia);
    
    switch(dia){
        case 1:
        printf("Você escolheu Domingo!\n");
        break;
        
        case 2:
        printf("Você escolheu Segunda-feira!\n");
        break;
        
        case 3:
        printf("Você escolheu Terça-feira!\n");
        break;
        
        case 4:
        printf("Você escolheu Quarta-feira!\n");
        break;
        
        case 5:
        printf("Você escolheu Quinta-feira!\n");
        break;
        
        case 6:
        printf("Você escolheu Sexta-feira!\n");
        break;
        
        case 7:
        printf("Você escolheu Sábado!\n");
        break;
        
        default:
        printf("Opção inválida! Programa Encerrado");
        return 1;
    }
    return 0;
    
}
