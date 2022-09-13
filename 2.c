#include <stdio.h>
int main(){
    int d;
do{
    printf("Digite um número correspondente ao dia da semana:");
    scanf("%d",&d);
        switch (d)
        {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terça\n");
            break;
        case 4:
            printf("Quarta\n");
            break;
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        case 7:
            printf("Sábado\n");
            break; 
        default:
            printf("Número inválido\n");
            break;
        }
}
while(d!=0);
return 0;
}