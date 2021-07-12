/* matrix multuiplication
    M1     M2                       M1M2
a=|1 2|  |3 2| ---- |3+14  2+0|----|17  2|
  |3 4|  |7 0|----- |9+28  6+0|----|37  6|

  */

/*............................................................................................................*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("Entering FIRST MATRIX \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("enter the %d %d element of  first matrix :\n", i, j);
            scanf("%d", &a[i][j]);
        }
        // printf("\n");
    }

    printf("Entering SECOND MATRIX\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("enter the %d %d element of second matrix :\n", i, j);
            scanf("%d", &b[i][j]);
        }
        // printf("\n");
    }

    printf("***Your Resultant Matrix Is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // calculating result
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][j] + b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    //print the resultant matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printing result
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}