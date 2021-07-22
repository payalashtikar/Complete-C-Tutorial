//do while loop

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, index = 0;
    printf("enter a number : \n");
    scanf("%d", &num);
    do
    {
        printf("%d\t", index); //if we want from 1 then write here index+1
        index = index + 1;
        // printf("%d\t", index);
    } while (index < num);

    return 0;
}
