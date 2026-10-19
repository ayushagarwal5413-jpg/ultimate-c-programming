#include <stdio.h>
int main()
{
int i=0 , n;
printf("enter the value of n");
scanf("%d" , & n);
do
{
    printf("the value of i is %d" , i);
        i++;
}
 while (i<n);
return 0;
}

