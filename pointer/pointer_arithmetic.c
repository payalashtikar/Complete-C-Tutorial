#include <stdio.h>
int main()
{
    int a = 34;
    int *ptra = &a;
    //  char  a ='3';  // if we used char it will add 1 byte
    // char* ptra = &a;

    ptra++;
    printf(" address of a is %d\n", ptra);
    printf(" address of a with increament  is %d\n", ptra + 2); // it will add size of int byte 4 to the address of a
    printf(" address of a with increament  is %d\n", ptra - 2);
    return 0;
}