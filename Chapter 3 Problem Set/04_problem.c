#include <stdio.h>
int main()
{
char c = 'a';
printf("the letter is %c\n" , c);
printf("the value of letter %c is %d\n" , c , c);
if (c>=97 && c<=122)
printf("the letter is lowercase");
else
printf("the letter is not lowercase");
return 0;
}
