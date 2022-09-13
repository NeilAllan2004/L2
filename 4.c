#include <stdio.h>

int main(){
int AlturaJose=150, AlturaPedro=110, anos=0;
while (AlturaJose>=AlturaPedro){
    AlturaJose+=2;
    AlturaPedro+=3;
    anos++;
}
printf("Pedro será maior que José em %d anos",anos);
return 0;

}