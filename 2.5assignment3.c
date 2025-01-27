#include <stdio.h>

int main()
{
// int myNumbers[] = {25, 50, 75, 100};
// printf("%d\n", myNumbers[0]);
// myNumbers[0] = 33;
// printf("%d\n", myNumbers[0]);
// printf("%lu\n", sizeof(myNumbers));
int ages[]={20, 22, 18, 35, 48, 26, 87, 70};
int length = sizeof(ages)/sizeof(ages[0]);
int num;
for(int i = 0; i < length; i++){
    num += ages[i];
   
}
float avg = 1.0*  num/length;
printf("Average num is %f\n", avg);


int lowest = 100;
for(int i = 0; i < length; i++){
   if(ages[i]<lowest){
    lowest = ages[i];
   }else{
    continue;
   }
}
printf("Lowest age is: %d\n",lowest);
return 1;
}