#include <stdio.h>
float average(int , int , int);
float average(int a , int b , int c)
{
    printf("the average of 3 numbers is %f" , (a+b+c)/3.0);
    return (a+b+c)/3.0;
}
int main()
{
int a=3 , b=6 , c=8;
 average(a , b , c);
return 0;
}