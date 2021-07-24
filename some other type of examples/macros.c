#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("file name is %s\n",__FILE__);
    printf("todyas date is %s\n",__DATE__);
    printf("time now  is %s\n",__TIME__);
    printf("line no. is %d\n",__LINE__);
    printf("ANSI : %d\n",__STDC__);


     return 0;
}