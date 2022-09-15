#include <stdio.h>
#include <stdlib.h>
int main(){
int i;
char b[11];
printf("Binário/Hexadecimal/Octal\n");
for(i=1;i<=256;i++){
    itoa(i,b,2);
    printf("%s/ %x/ %o\n",b,i,i);
}


return 0;
}