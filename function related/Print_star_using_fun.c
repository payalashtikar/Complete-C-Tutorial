#include <stdio.h>

void starPattern(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void reverseStarPattern(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= row - i - 1; j++) // if we wrote only j<=row-i then it print 1 more *
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int row, type;
    printf("enter 0 for triangularstar pattern and 1 for reverse triangular star pattern :\n");
    scanf("%d \n", &type);

    printf("how many rows do you want to print star  :\n");
    scanf("%d \n", &row);
    // starPattern(row);
    // reverseStarPattern(row);

    /*we used switch statement bcz we want type from user either user want to print star or reverse pattern 
otherwise we can direct called a function in main () */
    switch (type)
    {
    case 0:
        starPattern(row);
        break;
    case 1:
        reverseStarPattern(row);
        break;
    default:
        printf(" you have entered wrong type...! ");
        break;
    }
    return 0;
}