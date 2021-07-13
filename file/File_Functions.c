/*.........reference (output shown in) to myfile.txt.........*/
#include <stdio.h>
int main()
{
    FILE *ptr = NULL; //creating file pointer
    char string[40];
    ptr = fopen("myfile.txt", "r");
    fscanf(ptr, "%s", string);
    printf("the content of this file has %s\n", string);
    return 0;
}
//string me first word read hoga file ka ie.this -----which is from myfile.txt
//that means in the file spaces are available within each words thats why it is not able to read
// it avoids next words bcz of the space


/*..................................................................................................................*/


/**************************************************WRITTING FILE*******************************************/
// #include <stdio.h>
// int main()
// {
//     FILE *ptr = NULL; //creating file pointer
//     char string[60]="this content are describeing about the functions of file ";
//     ptr = fopen("myfile.txt", "w");
//     fprintf(ptr, "%s", string);
//     // printf("the content of this file has %s\n", string);
//     return 0;
// }
//output of this write file is overwritten on our created mytext.txt file 
//old content errase and shows which we wrote in this file

/*..................................................................................................................*/


/**************************************************Append FILE*******************************************/
// #include <stdio.h>
// int main()
// {
//     FILE *ptr = NULL; //creating file pointer
//     char string[60]="this content are describeing about the functions of file ";
//     ptr = fopen("myfile.txt", "a");
//     fprintf(ptr, "%s", string);
//     return 0;
// }
//the content which we want to written in this file it will display as a append form 