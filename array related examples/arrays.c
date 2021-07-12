/*1-d array*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    //printf("hello \n ");
    // int marks[4];

    int  marks[10]={10,20,30,40,50};
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d element of the array is %d\n", i, marks[i]);
    }




/*......................................................*/
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("enter the value  of %d element of the array \n", i);
    //     scanf("%d", &marks[i]);
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("the value of %d element of the array is %d\n", i, marks[i]);
    // }



/*........................................................*/
    // printf("marks of student 1 is %d\n", marks[0]);
    // marks[0] = 40;
    // marks[1] = 50;
    // marks[2] = 60;
    // marks[3] = 70;
    // printf("marks of student 1 is %d\n", marks[0]);
    // printf("marks of student 2 is %d\n", marks[1]);
    // printf("marks of student 3 is %d\n", marks[2]);
    // printf("marks of student 4 is %d\n", marks[3]);
    return 0;
}
