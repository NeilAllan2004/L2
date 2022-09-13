#include <stdio.h>
int main(){
int i, somatorio=0;
for(i=0;i<=200;i++){
    if(i%3==0 && i<=100){
        somatorio+=i;
        printf("%d\n",i);
}
    if(i%5==0 && i>100){
        somatorio+=i;
        printf("%d\n",i);
    }
}
printf("O somatório dos números é: %d",somatorio);
return 0;
}