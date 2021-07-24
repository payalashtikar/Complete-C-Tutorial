#include <stdio.h>
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("enter any number which you want : \n ");
    scanf("%d", &n);
    //factorial(num);
    printf("the factorial of %d is %d \n", n, factorial(n));
    return 0;
}
