/* take input from the user and ask user to choose 0 for triangularstar pattern and
  1 for reverse triangular star pattern
  *                  * * * * *
  * *                * * * *
  * * *              * * *
  * * * *            * *
  * * * * *          *
  
  */
 /*.........................completed..........................*/

#include <stdio.h>
int main()
{
    int n, choice;
    printf("how many rows do you want to print star  :\n");
    scanf("%d\n", &n);
    printf("enter 0 for triangularstar pattern and 1 for reverse triangular star pattern :\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 0:
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf(" * ");
            }
            printf("\n");
        }
        break;

    case 1:
        for (int i = 1; i < n; i++)   //let n=5  ,  i=1 ; i<=5 ; i++
        {
            for (int j = n; j > i; j--) //j=5,j>=i,j--
            {
                printf(" * ");
            }
            printf("\n");
        }
        break;

    default:
        printf("Invalide Choice..! ");
        break;
    }
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf(" * ");
    //     }
    //     printf("\n");
    // }

    return 0;
}
