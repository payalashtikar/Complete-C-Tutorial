#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks[2][5] = {{10, 20, 30, 40, 50},
                       {60, 70, 80, 90, 100}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("the value of %d , %d element of the array is %d\n", i, j, marks[i][j]);

            // in matrix form 
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
