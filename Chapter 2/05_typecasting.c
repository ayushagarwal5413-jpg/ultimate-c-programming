#include <stdio.h>
int main()
{
    int a=45;
    float b=32.23;
    int c;
   printf("enter value");
   scanf("%d" , &c);
   c=(int)b;
    printf("enter %d" , c);
    return 0;
}
// cannot use c because it rermains undeclared even if i use int c but not add its value and try to do it will show error so any know or declared is to be used
// the other way is =(int)b because n is alreay declared
