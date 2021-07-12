/*
 you manage a travel agency and you want your n drivers to input their following details.
name , driving licence no. , route , kms 
your program should be able to take n as input(or you can take n=3) and your drivers will start inputting their details one by one.
your program shold print details of the drivers in a fashion.
user structure.
*/

/*..........................completed........................*/

#include <stdio.h>
struct travelAgency // means we can write / call travelAgency as tA in the program
{
    char name[20];
    char driving_licence_no[20];
    char route[20];
    int kms;
};

int main()
{
    struct travelAgency t1, t2, t3;

    printf("enter the details of the Driver NO. 1 \n");
    printf("enter the name of first driver\n");
    scanf("%s", &t1.name);
    printf("enter the licence no. of second driver\n");
    scanf("%s", &t1.driving_licence_no);
    printf("enter the route of third driver\n");
    scanf("%s", &t1.route);
    printf("enter the no of kms\n");
    scanf("%d", &t1.kms);

    printf("enter the details of the Driver NO. 2  \n");
    printf("enter the name of second driver\n");
    scanf("%s", &t2.name);
    printf("enter the licence no. of second driver\n");
    scanf("%s", &t2.driving_licence_no);
    printf("enter the route of third driver\n");
    scanf("%s", &t2.route);
    printf("enter the no of kms\n");
    scanf("%d", &t2.kms);

    printf("enter the details of the Driver NO. 3 \n");
    printf("enter the name of third driver\n");
    scanf("%s", &t3.name);
    printf("enter the licence no. of second driver\n");
    scanf("%s", &t3.driving_licence_no);
    printf("enter the route of third driver\n");
    scanf("%s", &t3.route);
    printf("enter the no of kms\n");
    scanf("%d", &t3.kms);

    printf("****** PRINTING THE INFORMATION OF THESE DRIVERS ******\n");
    printf("for Driver No. 1 : \n name is %s\n", t1.name);
    printf("driving_licence_no is %s\n", t1.driving_licence_no);
    printf("route is %s\n", t1.route);
    printf("kms is %s\n", t1.kms);

    printf("for Driver No. 2 : \n name is %s\n", t2.name);
    printf("driving_licence_no is %s\n", t2.driving_licence_no);
    printf("route is %s\n", t2.route);
    printf("kms is %s\n", t2.kms);

    printf("for Driver No. 3 : \n name is %s\n", t3.name);
    printf("driving_licence_no is %s\n", t3.driving_licence_no);
    printf("route is %s\n", t3.route);
    printf("kms is %s\n", t3.kms);

    return 0;
}