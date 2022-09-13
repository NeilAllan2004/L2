#include <stdio.h>
int main(){
int i,A,B,C,soma=0;
printf("Digite o limite : ");
scanf("%d",&A);
scanf("%d",&B);

if(A>B){
    C=B;
    B=A;
    A=C;
}

for(i=A;i<=B;i++){
    soma+=i;
}
printf("A média aritmética entre os números nesse limite é: %.2f", (float)soma/(B-A+1));
return 0;
}