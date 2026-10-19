#include <stdio.h>
int main()
{
int a=9;
int b=2;
float c=a/b;
int d=6.7;
printf("the value is %f\n" , c);
printf("the value is %d" , d);
    return 0;
}
// float c is used but a and b are integers so result is alo an integer instead of float
// int d=6.7;  demotion takes place beacuse of an integer not a float value