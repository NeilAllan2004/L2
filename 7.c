#include <stdio.h>
int main(){
float Valor1, Valor2=0;

printf("Digite o primeiro valor: ");
scanf("%f",&Valor1);

while(Valor2==0){
    printf("Digite o segundo valor(Digite um número diferente de 0): ");
    scanf("%f",&Valor2);
}

printf("O valor da divisão do primeiro pelo segundo é: %.2f\n",Valor1/Valor2);

return 0;
}