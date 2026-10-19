#include <stdio.h>
int force(float , float);
int force(float m , float g)
{
printf("The force of attraction is %f" , m*g);
return m*g;
}
int main()
{
    float m=45.0 , g = 9.8;
    force(m,g); 
    return 0;
}