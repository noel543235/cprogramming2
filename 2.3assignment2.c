#include <stdio.h>

int main()
{
// int i, j;
// for(i=0; i<=2;++i){
//     printf("Outer: %d\n", i);
//     for(j=0; j <=3; j++){
//         printf("Inner: %d\n", j);

//     }
// }
int i ,j, c;
for(i=0; i <=100; i+=10){
    printf("%d\n", i);
}
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