#include <stdio.h>
int main()
{
if(1){
    printf("this value is printed\n");
}
if(1.0){
    printf("this value is also printed\n");
}
if('c'){
    printf("this value is printed too");
}
if(0){
    printf("this value is not printed because it is not non zero");
}
return 0;
}