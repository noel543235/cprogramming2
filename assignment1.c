#include <stdio.h>

int main()
{
int num = 10;
while(num > 0){
    printf("%d\n", num);
    num--;
}

if(num == 0){
    printf("Happy New Year!");
}
return 1;
}