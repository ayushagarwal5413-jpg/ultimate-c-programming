//print multiplication of n natural numers in reverse order
#include <stdio.h>
int main()
{
int n , i;
printf("enter n");
scanf("%d" , & n);
for(i=10;i;i--)
{
    printf("the product of %d and %d is %d\n" , n , i , n*i);
}
return 0;
}