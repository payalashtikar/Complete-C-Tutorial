#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "ninad";
    char s2[] = "nid";
    char s3[50] ;
    // concat
    puts(strcat(s1, s2));

    // finding length
    printf("the length of s1 is: %d\n", strlen(s1));
    printf("the length of s2 is: %d\n", strlen(s2));

    // reversing string
    printf("the reverse of s1 is: %s\n", strrev(s1));
    printf("the reverse of s2 is: %s\n", strrev(s2));
    // or
    puts(strrev(s1));
    puts(strrev(s2));

    // copying s1,s2 to s3
    strcpy(s3,strcat(s1,s2));
    puts(s3);

    // comparision 
    printf("ther strcmp for s1,s2 returned %d",strcmp(s1,s2));
    return 0;
}