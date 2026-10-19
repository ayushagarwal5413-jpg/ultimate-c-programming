#include <stdio.h>
int main()
{
int l , b;
printf("enter l\n , b");
scanf("%d %d" , &l , &b);
printf("The Area Of The Rectangle is %d" , l*b );
return 0;
} 
// a=l*b will not work beacuse l and b is not defined when a is written and value is taken later but if you do it with printf without scanf it will work perfectly
// cannot use %f in printf because both values are integers
