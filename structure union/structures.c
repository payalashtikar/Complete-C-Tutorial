#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int mrks;
    char fav_char;
    char name[20];
};

// struct Student payal, payu, pihu;  //globle variable 
// void print()
// {

//     printf("%S",payal.name);
// }

int main()
{
    struct Student payal, payu, pihu;  //local variable 
    payal.id = 1;
    payu.id = 2;
    pihu.id = 3;

    payal.mrks = 60;
    payu.mrks = 50;
    pihu.mrks = 70;

    payal.fav_char = 'A';
    payu.fav_char = 'B';
    pihu.fav_char = 'C';

    printf("\n");
    printf("payal id is %d  \n ", payal.id);
    printf("payal got %d marks \n ", payal.mrks);
    printf("payal fav_char is  %d \n ", payal.fav_char);
    printf("full name of payal is Payal Ashtikar \n");

    printf("\n");
    printf("payu id is %d \n ", payu.id);
    printf("payu got %d marks \n ", payu.mrks);
    printf("payu fav_char is  %d \n ", payu.fav_char);
    printf("full name of payu is payu jain\n");

    printf("\n");
    printf("pihu id is %d \n ", pihu.id);
    printf("pihu got %d marks \n ", pihu.mrks);
    printf("pihu fav_char is  %d \n ", pihu.fav_char);
    printf("full name of pihu is wandhe \n ");
    printf("\n");
    // copying
    payal.name;
    strcpy(payal.name, "Payal Ashtikar \n");
    printf("full name is : %s \n ", payal.name);

// print();
    return 0;
}