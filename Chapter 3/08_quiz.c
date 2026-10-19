#include <stdio.h>
int main()
{
    int a=85;
    if(a<=100 && a>=90)
    {
        printf("grade = A");
    }
        else if(a<=90 && a>=80)
        {
            printf("grade = B");
     }
     else if(a<=80 && a>=70)
     {
        printf("grade = C");
     }
     else
     {
        printf("garde = F");
     }
      return 0;
}