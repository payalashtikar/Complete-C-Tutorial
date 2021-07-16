#include<stdio.h>
#include<stdlib.h>

int sum(int a,int b)
{
    return a+b;
}

void greetHelloAndExecute(int (*fptr)(int,int))
{
    printf("Hello User\n");
    printf("the sum of 5 & 6 is %d\n",fptr(5,6));
}

void greetGmAndExecute(int (*fptr)(int,int))
{
    printf("Gud Mrng...... User\n");
    printf("the sum of 5 & 6 is %d\n",fptr(5,6));
}
int main()
{
    int (*ptr)(int , int);
    ptr=sum;
    greetHelloAndExecute(ptr);
    greetGmAndExecute(ptr);
     return 0;
}