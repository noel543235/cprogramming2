#include <stdio.h>

int main()
{

int i ,j, c;

int  mult;
for(j=1; j<=10; j++){
   
    for(c=1; c <= 10; c++){
        mult = j*c;
        printf("%4d", mult);

    }
    printf("\n");
}
return 1;
}