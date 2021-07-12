/*example of call by reference*/
#include <stdio.h>
void changeValue(int *add)
{
    *add = 10000;
}
int main()
{
    int a = 34, b = 74;
    printf("the value of a now is %d \n ", a);
    changeValue(&a);
    printf("the value of a now is %d \n ", a);
    return 0;
}