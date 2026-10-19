//print 1 * for 1st line 3 for 2nd line and 5 for 3rd line
#include <stdio.h>
int main()
{
int i , j , n=3;
for(i=1;i<=n;i++)
{
    for(j=1;j<=2*i-1;j++)
    {
    printf("*");
    }
    printf("\n");
}
return 0;
}