#include<stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    //1.const keyword
    //2.define keyword
    int a = 10;
    const  float b = 2.7; //we cant do this 
    //b=3.6;       //wrong since b is a const

    // PI = 3.4; // we cant do this we already define it
    printf("%f",PI);
    return 0;
}
