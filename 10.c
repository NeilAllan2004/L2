#include <stdio.h>
int main(){
int i;
printf("Os múltiplos de 4 entre 15 e 90 são: \n");
for(i=15;i<=90;i++){
    if(i%4==0){
        printf("%d\n", i);
    }
}
return 0;
}