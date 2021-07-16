// use of malloc , calloc , relloc , free function

#include <stdio.h>
#include <stdlib.h> //used for dyanamic mem funcn
int main()
{

    /*........................ use of malloc.......................*/
    // int *ptr,n;
    // printf("enter the size of the array you want to create\n");
    // scanf("%d",&n);
    // ptr = (int *)malloc(n * sizeof(int));
    // // for traversing
    // for (int i = 0; i < n; i++)
    // {
    //     printf("enter the value no %d of this array \n",i);
    //     scanf("%d",&ptr[i]);
    // }
    // //for printing
    //  for (int i = 0; i < n; i++)
    // {
    //     printf("the value at %d of this array is %d \n",i,ptr[i]);
    // }

    /*..........................................USE OF CALLOC.......................................*/
    int *ptr, n;
    printf("enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    // for traversing
    for (int i = 0; i < n; i++)/*............if i hide this part and run it then it will automatically initialized value as 0*/
    {
        printf("enter the value no %d of this array \n", i);
        scanf("%d", &ptr[i]);
    }
    //for printing
    for (int i = 0; i < n; i++)
    {
        printf("the value at %d of this array is %d \n", i, ptr[i]);
    }

    /*........................................USE OF REALLOC.......................................*/
    //  int *ptr,n;
    printf("enter the size of the new array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    // for inputting
    for (int i = 0; i < n; i++)
    {
        printf("enter the new value no %d of this array \n", i);
        scanf("%d", &ptr[i]);
    }
    //for printing
    for (int i = 0; i < n; i++)
    {
        printf("the new value at %d of this array is %d \n", i, ptr[i]);
    }


    /*.............................................USE OF FREE...............................*/
    free(ptr);//memory free
    return 0;
}