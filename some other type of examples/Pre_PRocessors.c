/*  */

 //including add.c file 
// #include<stdio.h>
// #include"add.c" 
// int main()
// {
//     int var=0;
//     printf("this is me %d\n",var);
//      return 0;
// }

//it throws error bcz in this program include two main function , one main() in add.c and another in this code
// if we wrote main2() in add.c by replacing main() then it will compile

/*....................................................................................................................*/

//including #define directory

// #include<stdio.h>
// #include"add.c"  //including add.c file 
// #define PI 3.14
// int main()
// {
//     float var=PI;
//     printf("the value of PI %d\n",var);
//      return 0;
// }

/*....................................................................................................................*/

//including macros
#include<stdio.h>
#include"add.c"  //including add.c file 
#define PI 3.14
#define SQUARE(r) r*r
int main()
{
    float var=PI;
    int r=4;
    printf("the area of PI %d\n",var);
    printf("the area of the circle is  %f\n",PI * SQUARE(r));

     return 0;
}
