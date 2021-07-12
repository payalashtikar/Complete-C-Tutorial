/*
exercise on dynamic memory allocation 
abc pvt.ltd.manages employee records of other compnias.
employee id can be of any length and it can contain any character.
for 3 employee , you have to take length of employee id as an input in a length integer variabl
then , you have to take employee id as an input and display it on screen.
stores the employee id in a character array which is allocated dynamically.
you have to create only one character arraydynamically

output format : 
employee 1:
enter no of character in year eId
23
dynamically allocate the character array
take input from user

also for employee 2 & employee 3
*/

/*.........................................completed.............................*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d : enter the no. of characters in your employee Id %d\n", i + 1);
        scanf("%d", &chars);
        //input buffer me a chala jayega iski vjh se scanf gayb ho jayega or a input nhi le payega 
        //for solving this we declare getchar 
        getchar();
        printf("enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *)malloc(chars * sizeof(char));
        printf("enter your employee Id %d\n");
        scanf("%s", ptr);
        printf("your employee Id is %s\n", ptr);
        free(ptr);
        i = i + 1;
    }

    return 0;
}