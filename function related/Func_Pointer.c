#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

void greed()
{
    printf("hellooooooooooooooooooooo %d\n");
}

int main()
{
    int a;
    printf("the sum of 1 nd 2 is %d\n", sum(1, 2)); //testing function
    int (*fptr)(int, int);//declaring function pointer
    fptr = &sum;//creating function pointer
    int d = (*fptr)(4, 6);//dereferencing a pointer
    printf("the value of d id %d\n", d);
    return 0;
}