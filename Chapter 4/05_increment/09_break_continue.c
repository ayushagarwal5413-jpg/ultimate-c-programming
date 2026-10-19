#include <stdio.h>
int main()
{
int i , n=15;
for(i=0 ; i<n ; i++)
{
if(i==5)
continue;
printf("the value is %d\ n" , i);
if(i==8)
break;
printf("%d\n" , i);
}
return 0;
}
// printf which is used first will get active 