#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("enter your age :\n");
    scanf("%d", &age);
    printf("you have entered %d as your age\n");
    // if statement
    // if - else statement
    // if-else-if statement
    if (age > 18)
    {
        printf("you are eligible for votting");
    }
    else if (age > 10)
    {
        printf("you are between 10 to 18 and you are vote for kids ");
    }
     else if (age > 3)
    {
        printf("you are between 3 to 10 and you are vote for babies ");
    }
    else
    {
        printf("sorry...! You are not eligible ..!");
    }

    return 0;
}
