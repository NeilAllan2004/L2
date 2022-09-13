#include <stdio.h>
int main(){

int i,A,B,C, contador=0;
printf("Digite o limite para encontar os números divisíveis por 3: ");
scanf("%d",&A);
scanf("%d",&B);

if(A>B){
    C=B;
    B=A;
    A=C;
}

for(i=A;i<=B;i++){
    if(i%3==0){
        contador+=1;
    }
}
printf("Nesse intervalo, existe %d números divisíveis por 3",contador);

return 0;
}