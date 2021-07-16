//function program for ------- with arguments and with return value//



/*.....................................................FIRST WAY...........................................................*/
#include<stdio.h>
int sum(int a , int b)
{
    return a+b;
}                    
int main(int argc, char const *argv[])
{
    //printf("hello \n ");
    int a,b,c;
    a=9;
    b=91;
    c = sum(a,b);
    printf("the sum is %d\n",c);
    return 0;
}
//  int sum(int a , int b)                        //if we implement function here then it throws error---implicit declaration
// {                                             // warning: implicit declaration of function 'sum'
//     return a+b;
// }                   





/*..........................ANOTHER WAY.................................................*/

#include<stdio.h>
int sum(int a , int b);                                      //function declaration here
int main(int argc, char const *argv[])
{
    //printf("hello \n ");
    int a,b,c;
    a=9;
    b=91;
    c = sum(a,b);                                        //function call
    printf("the sum is %d\n",c);
    return 0;
}
 int sum(int a , int b)                /*...................function definiton*/        
{                                            
    return a+b;
}                   