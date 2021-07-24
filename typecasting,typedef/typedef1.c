/*..........................example 2.........................*/
// typedef <previous_name> <alias_name>

#include <stdio.h>
typedef struct Student //prev_name
{
    int id;
} std; //alias_name

int main()
{
    // struct Student s1,s2;  //we can used alias name
    std s1, s2;
    s1.id = 46;
    s2.id = 63;
    printf("value of s1 Id is : %d\n", s1.id);

    printf("value of s2 Id is : %d", s2.id);

    return 0;
}