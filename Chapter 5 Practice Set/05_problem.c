#include <stdio.h>
int main()
{
int a=4;
printf("%d,%d,%d\n",a,++a,a++);
return 0;
}
// operator works from right to left so for a++ 4 will be printed and number becomes 5 then for ++a it is 6 and for a also it is 6