#include <stdio.h>

int main()
{
int num = 10;
while(num > 0){
    printf("%d\n", num);
    num--;
}

if(num == 0){
    printf("Happy New Year!\n");
}

int num2 = 10;
while(num2 > 0){
    printf("%d \n", num2);
    num2-=2;
}
return 1;
}