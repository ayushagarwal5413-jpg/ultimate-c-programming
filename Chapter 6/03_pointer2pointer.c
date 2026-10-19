#include <stdio.h>
int main()
{
int i=18;
int *j=&i;
int **k=&j;
int ***m=&k;
printf("the value of address of i is %d\n" , ****&m);
printf("the value of address of i is %d\n" , ***&k);
printf("the value of address of i is %d" , **&j);
return 0;
}
// 1 * cuts 1 &