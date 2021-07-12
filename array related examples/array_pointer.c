#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int *arrayptr = arr;
    // for printing arrays value
    printf(" value at position 0 is : %d\n", arr[0]);
    printf(" value at position 1 is : %d\n", arr[1]);
    printf(" value at position 2 is : %d\n", arr[2]);
    printf(" value at position 3 is : %d\n", arr[3]);
    printf(" value at position 4 is : %d\n", arr[4]);
    printf(" value at position 5 is : %d\n", arr[5]);
    printf(" value at position 6 is : %d\n", arr[6]);
    printf("\n");

    //arr++;    ----- throw an error
    //it will gives us a error bcz we cant increament the array it is constant

    arrayptr++; // we can write it increament as
    arrayptr++;

    // for printing arrays address
    printf(" address of position 0 is : %d\n", &arr[0]);
    printf(" address of position 1 is : %d\n", &arr[1]);
    printf(" address of position 2 is : %d\n", &arr[2]);
    printf(" address of position 3 is : %d\n", &arr[3]);
    printf(" address of position 4 is : %d\n", &arr[4]);
    printf(" address of position 5 is : %d\n", &arr[5]);
    printf(" address of position 6 is : %d\n", &arr[6]);
    printf("\n");
    // we can also write for address is
    printf(" address of position 0 is : %d\n", arr);
    printf(" address of position 1 is : %d\n", arr + 1);
    printf(" address of position 2 is : %d\n", arr + 2);
    printf(" address of position 3 is : %d\n", arr + 3);
    printf(" address of position 4 is : %d\n", arr + 4);
    printf(" address of position 5 is : %d\n", arr + 5);
    printf(" address of position 6 is : %d\n", arr + 6);
    printf("\n");
    // it will print the values
    printf(" address of position 0 is : %d\n", *(&arr[0])); //it prints address of element 0
    printf(" address of position 0 is : %d\n", *(arr));     // it prints value at address
    printf("\n");
    printf(" address of position 1 is : %d\n", *(&arr[1]));
    printf(" address of position 1 is : %d\n", *(arr + 1));
    printf("\n");
    printf(" address of position 2 is : %d\n", *(&arr[2]));
    printf(" address of position 2 is : %d\n", *(arr + 2));
    printf("\n");
    printf(" address of position 3 is : %d\n", *(&arr[3]));
    printf(" address of position 3 is : %d\n", *(arr + 3));
    printf("\n");
    printf(" address of position 4 is : %d\n", *(&arr[4]));
    printf(" address of position 4 is : %d\n", *(arr + 4));
    printf("\n");
    printf(" address of position 5 is : %d\n", *(&arr[5]));
    printf(" address of position 5 is : %d\n", *(arr + 5));
    printf("\n");
    printf(" address of position 6 is : %d\n", *(&arr[6]));
    printf(" address of position 6 is : %d\n", *(arr + 6));

    return 0;
}