// Write a program to print the sum of numbers occuring in the table of 8
#include <stdio.h>
int main()
{
    int i , sum=0;
    for(i=1;i<=10;i++)
    {
        sum += 8*i;
    }
    printf("the sum of numbers occuring in the table of 8 is %d\n" , sum);
    return 0;
}