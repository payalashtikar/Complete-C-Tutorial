#include <stdio.h>
/*print multiplication of no entered by the user inpretty from*/

/*..................completed.....................*/
int main(int argc, char const *argv[])
{
    int a;
    printf("enter a number : ");
    scanf(" %d \n", &a);
    
    
    printf("multiplication table of %d is as follows :\n", a);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d \n",a,i,a*i);
    }
    
    return 0;
}
