#include <stdio.h>
int factorial(int);
int factorial(int a)
{
     if(a==1 || a==0) // base condition
    {
        return 1;
    }
   
    return factorial(a-1) * a;
}
int main()
{
    int a=5;
    factorial(a);
     printf("the factorial is %d\n" , factorial(a-1) * a);
    return 0;
}// in recursion we write print in calling option and for return we write thing which is inside printf
// base conditon is given so that it does not go t nrgs=ative value