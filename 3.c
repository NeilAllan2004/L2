#include <stdio.h>

int main(){
int F, i;
int Total=1;

printf("Digite um número: ");
scanf("%d",&F);

for(i=1; i<=F; i++){
    Total=Total*i;
}

printf("A fatorial desse número é: %d\n",Total);

return 0;
}