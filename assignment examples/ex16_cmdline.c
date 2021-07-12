// you have to cretae cmd line utility to add ,subtract, multiply two no.
// first command line argument of ur c program must be the operation.
// the next argement being the two numbers.
// for example :
// -->command.c add 4 5
// -->9

/*..............................Completed...................................*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *operation;
    int n1, n2;
    operation = argv[1];
    n1 = atoi(argv[2]); //atoi---convert string to int
    n2 = atoi(argv[3]);
    printf("operation is %s\n", operation);
    printf("n1 is %d\n", n1);
    printf("n2 is %d\n", n2);

    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", n1 + n2);
    }
    else if (strcmp(operation, "sub") == 0)
    {
        printf("%d\n", n1 - n2);
    }
    else if (strcmp(operation, "mul") == 0)
    {
        printf("%d\n", n1 * n2);
    }
    else if (strcmp(operation, "div") == 0)
    {
        printf("%d\n", n1 / n2);
    }
    else
    {
        printf("out of the above choice.....!");
    }

    return 0;
}
//
// cmd like this---->
// PS C:\Users\HP\Documents\C tutorials> .\ex16_cmdline.exe add 40 70
// operation is add
// n1 is 40
// n2 is 70
// 110
// PS C:\Users\HP\Documents\C tutorials>