#include <stdio.h>
int main()
{
    char i='A';
    char *j=&i; // j is a pointer pointing to i (j is a character pointer)
    float k=5.68;
    float *m=&k;
    printf("the value of k is %p\n" , &k);
    printf("the value of k is %p\n" , m);
    printf("the value of i is %p\n" , j); // address of operator  use %
    printf("the value of i is %p\n" , &i); // address of operator  use %
    printf("the value of adress i is %c\n" , *&i); //value at address use *
    printf("the value of j is %p" , &j); // address of operator  use %
    return 0;
}
// if i use %d in line 12 it will give ascaii value