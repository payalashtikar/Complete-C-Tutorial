
/*function program for ----- without arguments and with return value*/

#include <stdio.h>

int takenumber()                  //function definition
{
    int i;
    printf("enter a number :\n");
    scanf("%d\n", &i);
    return i;                       //returning value
}
int main(int argc, char const *argv[])
{
    int a;
    //printf("hello \n ");
    a = takenumber();                //function calling
    printf("the entered number is %d\n", a);
    return 0;
}
