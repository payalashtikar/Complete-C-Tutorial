#include <stdio.h>
int isPalindrome(int num)
{
    int reversed = 0;
    int originalNumber = num;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("reverse number is :%d\n", reversed);

    if (originalNumber == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("enter a number to check whether it is palindrome or not : \n");
    scanf("%d", &number);
    if (isPalindrome(number))
    {
        printf("this number is a palindrome \n");
    }
    else
    {
        printf("this number is not a palindrome \n");
    }

    return 0;
}