#include <stdio.h>
#include <stdlib.h>

int funDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}
int main()
{
    // Case 1 : Deallocation of memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 44;
    ptr[2] = 54;
    ptr[3] = 64;
    free(ptr); // ptr is now a dangling pointer

    // Case 2 : Function Returning local variable address
    int *dangPtr = funDangling(); // dangPtr is now a dangling pointer

    int *dangPtr3
    // Case 3 : if a variable goes out of scope
    {
        int a = 45;

        dangPtr3 = &a;
    }
    // here variable a goes out of sco[pe which means dangPtr3 is pointing to a location which is freed and hence dangPtr is now a dangling pointer
    return 0;
}