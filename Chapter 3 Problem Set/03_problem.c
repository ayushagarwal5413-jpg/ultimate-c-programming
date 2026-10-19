#include <stdio.h>
int main()
{
int year;
printf("enter year");
scanf("%d" , &year);
if (year%4==0)
{
if(year%100==0)
{
if(year%400==0)
{
    printf("it is a leap year");
}
else
{
    printf("no leap year");
}
}
else
{
    printf("yes leap year");
}
}
else 
{printf("may be a leap year");
}
return 0;
}




/*if((year%4==0 && year%100!=0) || year % 400==0)*/
