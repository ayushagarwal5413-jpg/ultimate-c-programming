// print sum of first 10 natural numbers using while loop
#include <stdio.h>
int main()
{
    int i=1 , sum=0;
    while (i<=10)
    {
        sum +=i;
i++;
}
printf("the sum is %d\n" , sum);
return 0;
}
// if we use sum statement after i++ then 1 will become 2 and add to sum and for 10 it will become 11 and add to sum do first sum will be 2 and kast will be 11
//printf is used after bracket otherwise each sum will be shown seperately and now whole sum is the output
