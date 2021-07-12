/*
allow user to enter two string and then concatenate then by saying that 
str1 is a frnd of str2
*/

/*...............completed...............*/

#include <stdio.h>
int main()
{
    char s1[20];
    char s2[20];
    printf("enter string1 : \n");
    gets(s1);
    printf("enter string2 : \n");
    gets(s2);
    printf("%s is a friend of %s\n", s1, s2);
    return 0;
}