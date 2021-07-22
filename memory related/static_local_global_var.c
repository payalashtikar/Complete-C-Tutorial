#include <stdio.h>
int b = 34; //global// this is a global variable since it is declare inside main()
int func1(int b1)
{
    // int loc=567;//local of func

    static int myvar = 0;
    printf("the value of myvar is %d\n", myvar);
    myvar++;
    // printf("the address of b inside func1 is %d \n",&b);
    // printf("the value of b inside func1 is %d \n",b);

    return b1 + myvar;
}
int main()
{
    int b = 344;
    // int  loc =576;
    // printf("%d",loc);

    // printf("the address of b inside main is %d \n",&b);
    // printf("the value of b inside main is %d \n",b);

    int val = func1(b); //call once----return 0
    val = func1(b);     //second-----return 1
    val = func1(b);     //2
    val = func1(b);     //3
    val = func1(b);     //4

    int *ptr = &val;
    // printf("the value of func1 is %d \n",val);
    // printf("%d",loc);

    return 0;
}


/*b1 is formal argument 
b is actual arguments */