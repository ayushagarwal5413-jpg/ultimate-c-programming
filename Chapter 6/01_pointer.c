// POINTER IS A VARIABLE THAT STORES THE ADDRESS OF ANOTHER VARIABLE
#include <stdio.h>
int main()
{
    int i=18;
    int *j=&i; // j is a pointer pointing to i (j is an integer pointer)
    printf("the value of i is %p\n" , j); // address of operator  use %
    printf("the value of i is %p\n" , &i); // address of operator  use %
    printf("the value of address i is %d\n" , *&i); //value at address use *
    printf("the value of address i is %d\n" , *j); //value at address use *
    printf("the value of j is %p" , &j); // address of operator  use %
    return 0;
}
// if %p is used it will give value of address in hexadecimal but if %u is used it will give in integer