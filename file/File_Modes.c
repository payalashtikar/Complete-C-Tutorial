/* it analysed output from mytext.txt file */
#include <stdio.h>
int main()
{
    /*....................................Use of fgetc Mode......................*/

    // FILE *ptr = NULL; //creating file pointer
    // ptr = fopen("myfile.txt", "r");
    // //it read one character at a time --read first
    // char c = fgetc(ptr);
    // printf("The chatracyer I read was %c\n", c);
    // //read second
    // c = fgetc(ptr);
    // printf("Thje chatracter I read was %c\n", c);
    // fclose(ptr);

    /*....................................Use of fgets Mode......................*/
    // FILE *ptr = NULL; //creating file pointer
    // ptr = fopen("myfile.txt", "r");
    // char str[5];
    // fgets(str, 5, ptr); // it shows 5 character  string from file
    // printf("the string is %s\n", str);
    // fclose(ptr);

    /*....................................Use of fputc Mode......................*/
    // FILE *ptr = NULL; //creating file pointer
    // ptr = fopen("myfile.txt", "w");
    // fputc('P', ptr); //writting P in file
    // fclose(ptr);

    /*....................................Use of fputs Mode......................*/
    // FILE *ptr = NULL; //creating file pointer
    // ptr = fopen("myfile.txt", "w");
    // fputs("this is payal", ptr);
    // fclose(ptr);

    /*...........................................................................*/
    //r+
    // FILE *ptr = NULL; //creating file pointer
    // ptr = fopen("myfile.txt", "a+");
    // fputs("this is payal", ptr);
    // fclose(ptr);

    /*.......................................................................*/
    //w+
    // FILE *ptr = NULL; //creating file pointer
    // ptr = fopen("myfile.txt", "w+");
    // fputs("this is payal", ptr);
    // fclose(ptr);

    /*........................................................................*/
    //a+
    FILE *ptr = NULL; //creating file pointer
    ptr = fopen("myfile.txt", "a+");
    fputs("this is payal", ptr);
    fclose(ptr);
    return 0;
}