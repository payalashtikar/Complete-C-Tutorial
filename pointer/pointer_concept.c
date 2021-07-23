#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 10;
    int *p = &a;
    int *p2;
    int *p3 = NULL; //it returns nothing
    //p=a;
    printf("lets learn about pointers ..!\n");

    printf("address of pointer to a is  %d \n", &p);

    printf("address of a is %d\n", &a);
    printf("address of a is %p\n", p);
    printf("address of p is %d\n", &p);

    printf("address of some garbage is %d\n", p2);

    printf("address of some garbage is %d\n", p3); // it return 0 bcz its null

    printf("value of a is %d\n", *p);
    printf("value of a is %d\n", a);
    // %x --> value in hexadecimal
    printf("value of a is %x \n", p);
    printf("value of p is %d\n", p);

    return 0;
}
