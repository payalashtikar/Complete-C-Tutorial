#include <stdio.h>
//%d integer
//%c  character
// %f  float
// %l  long
// %lf  double
// %LF  long double

int main(int argc, char const *argv[])
{
    int a = 9;
    float b = 8.33;
    printf("the value of a is %d\n and the value of b is %f\n", a, b);
    printf(" the value of b is %.4f\n", b);
    printf(" the value of b is %10.4f\n", b);
    printf(" the value of b is %2.4f\n", b);
    printf(" the value of b is %6.4f\n", b);
    printf(" the value of b is %8.4f\n", b);

    printf(" the value of b is %.4f\n", b);
    printf(" the value of b is %-8.4f\n", b);
    printf("%-18.4f  this\n", b); //18 space
    printf("%18.4f  this\n", b);  // first space then print
    return 0;
}
