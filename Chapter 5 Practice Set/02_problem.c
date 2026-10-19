#include <stdio.h>
float c2f(float c);
float c2f(float c)
{
    printf("celcius to fahrenheit is %.2f" , ((9.0/5.0)*c)+32.0);
    return ((9/5)*c)+32;
}
int main()
{
float c=45;
c2f(c);
return 0;
}