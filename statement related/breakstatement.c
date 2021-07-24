#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("hello \n ");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("\n enter your age :\n",i);
        scanf("%d", &age);
        if (age > 10)
        {
            break;
        }
    }
    return 0;
}
