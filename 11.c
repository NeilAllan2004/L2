#include <stdio.h>
int main(){
int i,A,B,C;
printf("Digite o limite para achar os multiplos de 4: ");
scanf("%d",&A);
scanf("%d",&B);

if(A>B){
    C=B;
    B=A;
    A=C;
}

printf("Os múltiplos de 4 entre %d e %d são: \n",A,B);
for(i=A;i<=B;i++){
    if(i%4==0){
        printf("%d\n", i);
    }
}
return 0;
}