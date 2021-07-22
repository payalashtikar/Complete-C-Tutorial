#include <stdio.h>
int myfunc(int a, int b)
{
    // auto int sum;//or int sum ; //by default storage class auto int hoti hai
    //    extern int sum;//or int sum ; //by default storage class auto int hoti hai
    static myvar; //or int sum ; //by default storage class auto int hoti hai
    myvar++;
    printf("the sum is : %d \n", myvar);
    // sum=a+b;
    return myvar;
}
// int myvar=343;
int main()
{
    //declaration--telling the compiler about the variable (no space reserved)
    // definition--declaration + space reserved
    register int myvar = myfunc(3, 5); 
    //if we want to store in register used register keyword --->
    //cpu register ke under store krne ki facility provide krvata hai----> register
    myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    // printf("the sum is : %d \n",myvar);
    return 0;
}