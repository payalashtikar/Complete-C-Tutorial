#include<stdio.h>
int main(int argc, char const *argv[])
{
   int choice , marks;
   printf("enter your choice to guess your age : \n");
   scanf("%d",&choice);

    printf("enter  your marks : \n");
   scanf("%d",&marks);
   switch (choice)                             //switch within switch
   {
   case 1:
       printf("age is 10 \n");
       
       switch (marks)
       {
       case 60:
           printf("your marks is 60");
           break;
       
       default:
           printf("unable to access your marks ");
           break;
       }
       break;
    case 2:
       printf("age is 15 \n");
       break;
    case 3:
       printf("age is 20 \n");
       break;
   
   default:
       printf("choice \n");
       break;
   }
    return 0;
}
