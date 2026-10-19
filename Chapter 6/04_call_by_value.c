#include <stdio.h>
int sum(int , int);
int sum(int a , int b)
{
    printf("the sum is %d\n" , a+b);
    a=6; // sum function cannot change a because copy of a is used
      return a+b;
}
int main()
{
    int x=1 , y=5;
sum(x,y);
 printf("the value of x is %d" , x);
  
return 0;
}
