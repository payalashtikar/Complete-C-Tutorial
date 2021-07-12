// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("the value of argc is %d\n",argc);
//     return 0;
// }

// output:
// PS C:\Users\HP\Documents\C tutorials> cd "c:\Users\HP\Documents\C tutorials\" ; if ($?) { gcc Cmd_Line_argument.c -o Cmd_Line_argument } ; if ($?) { .\Cmd_Line_argument }
// the value of argc is 1
// PS C:\Users\HP\Documents\C tutorials> .\Cmd_Line_argument.exe
// the value of argc is 1
// PS C:\Users\HP\Documents\C tutorials> .\Cmd_Line_argument.exe payal is a good girl --->typ in terminal
// the value of argc is 6
// PS C:\Users\HP\Documents\C tutorials> 

/*.........................................................................................................*/#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("the value of argc is %d\n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("this argument at index number %d has value of %s\n",i,argv[i]);   //gives path 
    }
    
    return 0;
}