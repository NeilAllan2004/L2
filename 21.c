#include <stdio.h>
int main(){
int n, n1,n2,n3,n4,n5, inverso;
printf("Digite um número para conferir se ele é palíndromo: ");
scanf("%d",&n);
n1=n/10000;
n2=(n-n1*10000)/1000;
n3=(n-(n2*1000+n1*10000))/100;
n4=(n-(n3*100+n2*1000+n1*10000))/10;
n5=n-(n4*10+n3*100+n2*1000+n1*10000);
if(n1==n5 && n2==n4){
    printf("O número é palíndromo\n");
}
else{
    printf("O número não é palíndromo\n");
}
return 0;
}