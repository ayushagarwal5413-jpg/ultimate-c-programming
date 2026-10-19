#include <stdio.h>
int main()
{
    int a;
    printf("enter a");
    scanf("%d" , &a);
    switch(a)
    {
    case 10:
    printf("you entered 1");
    break;
    case 11:
    printf("you entered 2");
    break;

    case 12:
    printf("you entered 3");
    break;
    case 13:
    printf("you entered 4");
    break;
    default:
    printf("nothing matched");
    break;
    }
    return 0;
}
// the number written inside case is the number that has to be matched
// break stop the compiler where the statment gets true
