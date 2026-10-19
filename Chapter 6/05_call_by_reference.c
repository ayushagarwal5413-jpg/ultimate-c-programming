#include <stdio.h>
int sum(int * , int *);
int sum(int *a , int *b)
{
    printf("the sum is %d\n" , *a+*b);
    *a=6; // sum function can change a because address of x is stored by x as value equal to 6
}
int main()
{
    int x=1 , y=5;
sum(&x,&y);
 printf("the value of x is %d" , x);
  
return 0;
}
