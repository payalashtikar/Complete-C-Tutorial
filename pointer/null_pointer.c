#include <stdio.h>
int main()
{
    int a = 35;
    //1
    // int *ptr = &a;
    // printf("the address of a is %d\n", ptr);//rerun address of a garvage
    /*............................................................................................*/

    //2
    // int *ptr=NULL;
    // printf("the address of a is %d\n", ptr);//return 0
    /*............................................................................................*/

    //3
    // int *ptr = &a;
    // printf("the address of a is %d\n", *ptr);//return 35
    /*............................................................................................*/

    // //4
    // int *ptr=NULL;
    // printf("the address of a is %d\n", *ptr);
    /*............................................................................................*/

    //5.
    // int *ptr = NULL;
    // if (ptr != NULL)
    //     printf("the address of a is %d\n", *ptr); //success to run
    // else
    //     printf("the pointer is a null pointer and cannot be dereferenced\n");
    /*............................................................................................*/

    //6.
    // int *ptr = &a;
    // if (ptr != NULL)
    //     printf("the address of a is %d\n", *ptr); //return 35
    // else
    //     printf("the pointer is a null pointer and cannot be dereferenced\n");
    /*............................................................................................*/

    //7.
    // int *ptr;
    // if (ptr != NULL)
    //     printf("the address of a is %d\n", ptr); //return any value (return 51)
    // else
    //     printf("the pointer is a null pointer and cannot be dereferenced\n");
    /*............................................................................................*/

    //8.
    int *ptr;
    int c = 35;
    if (ptr != NULL)
        printf("the address of a is %d\n", *ptr); //print else part
    else
        printf("the pointer is a null pointer and cannot be dereferenced\n");
    return 0;
}