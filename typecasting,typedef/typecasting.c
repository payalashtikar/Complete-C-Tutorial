

// typecasting----converting one type to another
//typecasting syntax ------------(int) value;
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=5;
    float b=8 ,c=3.5,d=11/2;
    float e=(float)11/2;

    printf("the value of a is %d \n ",a);

    printf("the value of b is %d \n ",b);           // we convert float to int ie we write %d for print float, it return 0

    printf("the value of c is %d \n ",(int) c);     // this is actual typecasting

    printf("the value of d is %d \n ",(int) d);     //o/p is 5.5 but it convert into int ie.--5

    printf("the value of e is %f \n ",e);           // return 5.500000

    return 0;
}
