#include <stdio.h>

int main(){
int Termo1=0,Termo2=1,Temp=0,i;
for(i=0;i<20;i++){
    printf("%d ",Termo2);
    Temp=Termo2;
    Termo2+=Termo1;
    Termo1=Temp;
}
return 0;
}