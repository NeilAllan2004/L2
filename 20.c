#include <stdio.h>

int main(){
int i, Fatorial,f;

for(i=0; i<=10; i++){
    if(i%2){
        f=i;
        Fatorial=1;
        for(f=1; f<=i; f++){
            Fatorial=Fatorial*f;
        }
        printf("A fatorial de %d é %d\n",i,Fatorial);
    }
}

return 0;
}