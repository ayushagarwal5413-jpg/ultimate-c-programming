#include <stdio.h>
int main()
{
int i=5;
i += 5;
// can use i = i+5
printf("the value of i is %d\n" , i);
printf("the value of i is %d\n" , i++);
printf("the value of i is %d\n" , i);
return 0;
}
// i = i+2 or i += 2 are same to add