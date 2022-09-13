#include <stdio.h>
int main(){

int Maior,Menor,n;
puts("Digite um número");
scanf("%d",&n);
Maior=n;
Menor=n;
while(n!=0){
    puts("Digite um número");
    scanf("%d",&n);
    
    if(n>Maior){
        Maior=n;
    }
    else if(n<Menor){
        Menor=n;
    }
    printf("O maior número é %d e o menor é %d\n",Maior,Menor);

}

return 0;
}