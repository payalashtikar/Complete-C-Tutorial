#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    /*type 1 to declare string*/

    // char str[] = {'p', 'a', 'y', 'a', 'l','\0'}; //here---called null terminated character array
    /*without  \0 not a valid string
     with null character \0 it print ----- payal 
    //char str[] = {'p', 'a', 'y', 'a', 'l'};
     without null it take 1 extra garbage value ------- payal7*/

    /*type 2 declare string*/
    // char str[6] = "payal";  // it print ----> payal
    // char str[5] = "payal";  //it print ----> payal7
    // printStr(str);

    // take string from user here...gets() func
    // char str[30];
    // gets(str);//taking string input from user
    // printStr(str);

    // another way
    // char str[30];
    // gets(str);
    // printf("using printf taking input %s\n",str);

    //using puts()
    //  char str[30];
    // gets(str);
    // printf("using printf taking input %s\n",str);
    // printf("using puts taking input %s\n",str);

    // another way
    char str[30];
    gets(str);
    printf("using custom function printStr \n");
    printStr(str);
    printf("\n using printf taking input %s\n", str);
    printf("using puts taking input %s\n", str);
    return 0;
}