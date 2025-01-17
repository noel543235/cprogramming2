#include <stdio.h>

int main()
{
int myAge = 43;
printf("%d\n", myAge);
printf("%p\n", &myAge);

int* ptr = &myAge;

printf("%p\n",ptr);

printf("%d",*ptr);


return 1;
}