#include <stdio.h>

int main()
{
int num = 123;
char letter = 'd';
float flo = 12.20;

int* ptr = &num;

printf("%p\n",ptr);

printf("%d\n",*ptr);
int  temp = sizeof(*ptr);
printf("%d\n", temp);

char* ptr2 = &letter;

printf("%p\n",ptr2);

printf("%c\n",*ptr2);
char  temp2 = sizeof(*ptr2);
printf("%c\n", temp2);

float* ptr3 = &flo;

printf("%p\n",ptr3);

printf("%f\n",*ptr3);
float  temp3 = sizeof(*ptr3);
printf("%f\n", temp3);

int num1 = 50;
int num2 = 60;

int* ptr4 = &num1;
int* ptr5 = &num2;

int sum = *ptr4 + *ptr5;

printf("%d", sum);


return 1;
}