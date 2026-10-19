#include <stdio.h>
int change(int a);
 int change(int a)
 {
    a=77; //misnomer
    return a;
}
int main()
{
    int b=22;
    change(b);
    printf("%d" , b);
    return 0;
}
// here value of b does not change because b does not go to change(int a) but 22 goes to change(int a) here 22 is a copy and that is printed and original b remains same