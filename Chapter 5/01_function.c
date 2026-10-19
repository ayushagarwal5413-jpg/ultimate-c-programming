#include <stdio.h>
// Function Declaration/Prototype
int sum(int,int);
//Function Defination
int sum(int a,int b)
{
    printf("The Sum is %d" , a+b);
    return a+b;
}
//Function Calling
int main()
{
int a=5;
int b=8;
sum(a,b);
return 0;
}