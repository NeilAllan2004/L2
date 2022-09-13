#include <stdio.h>
int main(){
int i,A,B,C, somador=0;
printf("Digite o limite para o somatório: ");
scanf("%d",&A);
scanf("%d",&B);

if(A>B){
    C=B;
    B=A;
    A=C;
}

for(i=A;i<=B;i++){
    if(i%2==0){
        somador+=i;
    }

}
printf("O somatórios dos pares nesse intervalo é: %d",somador);

return 0;
}