// Calculate nth element of fabonacci series using recursion
// 0,1,1,2,3,5,8,13
#include <stdio.h>
int fabonacci(int);
int fabonacci(int n)
{
    if(n==1||n==2)
    {
    return n-1;
}
    return (fabonacci(n-1) + fabonacci(n-2));
}
int main()
{
int n=5;
    printf("The value of fabonacci series for n is  %d" , fabonacci(n-1) + fabonacci(n-2));
fabonacci(n);
return 0;
}
