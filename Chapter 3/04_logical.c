#include <stdio.h>
int main(){
int a=2 , b=1;
printf("the value of a and b is %d\n" , a&&b);
printf("the value of a or b is %d\n" , a||b);
    printf("the value of not(a) is %d\n" , !a);
    if(a&&b)
    { 
        printf("both are true");
    }
    return 0;
}
// all non zero values are same as 1 in c programming for logical operator
