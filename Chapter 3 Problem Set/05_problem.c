#include <stdio.h>
int main()
{
    int a=2 , b=4 , c=6 , d=8;
    if(a>b && a>c && a>d)
    printf("a is the greatest number");
    else if(b>a && a>c && b>d)
    printf("b is the greatest number");
    else if(c>b && c>a && c>d)
    printf("c is the greatest number");
    else
    printf("d is the greatest number");
    return 0;
}