#include <stdio.h>
int sum(int);
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return sum(n-1) + n;
}
int main()
{
int n=10;
sum(n);
printf("The sum of first 10 natural numer is %d" , sum(n-1) + n);
return 0;
}
