#include <stdio.h>

int main()
{
int num1 = 50;
int num2 = 60;

int* ptr4 = &num1;
int* ptr5 = &num2;

int sum = *ptr4 + *ptr5;

printf("%d", sum);


return 1;
}