// print multiplication of given numers n
#include <stdio.h>
int main()
{
int n , i;
printf("enter n");
scanf("%d" , & n);
for(i=1;i<11;i++)
{printf("the product of %d and %d is %d\n" , n , i , n*i);
}
return 0;
}