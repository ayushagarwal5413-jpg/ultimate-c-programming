#include <stdio.h>
int main()
{
    int a=45;
    if(a>60)
    {printf("ypu can drive and you are senior citizen");
    }
    else if(a>18)
    {printf("you can drive");
    }
    else if(a>30)
    {
        printf("you can driver and you are mature");
    }
    else
    { 
        printf("you cannot drive");
    }
    return 0;
}