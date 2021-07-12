#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d is %d \n ", i, array[i]);
    }
    // array[0]=100;   /* very imp point that if you change any value here,it gets reflected in main()*/
    return 0;
}

int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("the value of %d is %d \n ", i, ptr[i]);
        //or we can write it as
        printf("the value of %d is %d \n ", i, *(ptr + i));
    }
    *(ptr + 2) = 10000; //it changes the value of index 1 element
    return 0;
}

int func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value at %d,%d is %d \n ", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[][2] = {{2, 4}, {10, 12}};

    /*array as parameter*/
    // printf("the value at index 0 is %d \n ",arr[0]);
    // func1(arr);
    // printf("the value at index 0 is %d \n ",arr[0]);

    // func2(arr);
    // func2(arr);

    func3(arr);

    return 0;
}