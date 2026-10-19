// Write a program to find whether a numer is prime or not
#include <stdio.h>
int main()
{
    int i , n;
    printf("enter n");
    scanf("%d" , &n);
    if(n<=1)
    {
        printf("It is not a prime number");
    }
    for(i=2;i<n;i++)
    if(n%i==0)
    {
        printf("It is also not a prime number");
        break;
    }
    if(i==n)
    {
        printf("It is a prime number");
    }
    return 0;
}
//in line 18 else is not used otherwise for numers like 9,15,etc when div by 2 !=0 so it will go to else and print prime number
