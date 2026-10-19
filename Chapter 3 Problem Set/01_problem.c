#include <stdio.h>
int main()
{
    int marks1 , marks2 , marks3;
    printf("enter\n" , marks1);
    scanf("%d" , & marks1);
     printf("enter \n" , marks2);
    scanf("%d" , & marks2);
    printf("enter \n" , marks3);
    scanf("%d" , & marks3);
    if(marks1<33 || marks2<33 || marks3<33)
    {
        printf("failed in individual subject");
    }
else if((marks1+marks2+marks3)/3.0<40)
{
    printf("you are failed in total subject");
}
else{
    printf("you are passed");
}
return 0;
}