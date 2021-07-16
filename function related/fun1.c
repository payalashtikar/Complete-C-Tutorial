/*function program for-----with arguments and without return value*/

#include<stdio.h>
void printstar(int n)                    //function definition
{
    for (int  i = 0; i < n; i++)
    {
        printf("%c",'*');  //we are printing star(*) as a character in single quotes
    }
    
}
int main(int argc, char const *argv[])
{
    printstar(7);                       //function  calling
    return 0;
}
