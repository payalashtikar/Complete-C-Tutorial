#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 343;
    int *ptr; // this is a wild pointer
    *ptr = 40; // this is not a good thing to do
    ptr=&a;//ptr is no longer a wild pointer
    printf("the value of a is %d \n",*ptr);
    return 0;
}