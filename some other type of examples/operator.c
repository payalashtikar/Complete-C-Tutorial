// arithmetic operator
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, x, y, m, n;
    a = 9;
    b = 3;
    x = 5;
    y = 5;
    m = 2;
    n = 3;
    printf("a+b = %d\n", a + b);
    printf("a-b = %d\n", a - b);
    printf("a+*b = %d\n", a * b);
    printf("a/b = %d\n", a / b);
    printf("a%b = %d\n", a % b);

    printf("x==y = %d\n", x == y); //relational
    printf("x!=y = %d\n", x != y);
    printf("x<=y = %d\n", x <= y);
    printf("x>=y = %d\n", x >= y);
    printf("a>b = %d\n", a > b);
    printf("a<b = %d\n", a < b);

    printf("a&&b = %d\n", a && b); // two values are true (a=3 and b=5----true          a=0 and b=5---false)
    printf("a||b = %d\n", a || b); // one value must be true(a=0 or b=4)
    printf("!b = %d\n", !b);       // if b=1 --- o/p is 0 (opposite)

    //bitwise  operators are perform on bits --- first no is converted into binary then it will perform
    printf("m&n = %d\n", m & n); // and
    printf("m|n = %d\n", m | n); //or
    printf("m^n = %d\n", m ^ n); //ex-or -one must be true and another is false then its return true

    return 0;
}
